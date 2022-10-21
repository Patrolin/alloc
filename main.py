from shlex import split
from subprocess import run
from os import listdir

cache = {}

def include(file_path: str) -> str:
    if file_path not in cache:
        with open(file_path) as f:
            cache[file_path] = f.read()
    return cache[file_path]

def dir_info(dir_path: str):
    file_names = listdir(dir_path)
    for file_name in file_names:
        file_path = f"{dir_path}/{file_name}"
        yield file_name, file_path

def run_cpp(include_paths: list[str]):
    with open("_main.cpp", "w+") as f:
        f.write("\n".join(include(v) for v in include_paths))
    run(split("clang _main.cpp 'C:\\Program Files (x86)\\Windows Kits\\10\\Lib\\10.0.19041.0\\um\\x64\\kernel32.lib' -o _main.exe -O3"),
        check=True)
    run(split("./_main.exe"), check=True)

if __name__ == "__main__":
    for (test, test_path) in dir_info("tests"):
        print(f"{test}")
        run_cpp(["common/common.cpp", \
                 "allocators/malloc.cpp",
                 "common/items.cpp",
                 test_path])
    print()
    for (test_case, test_case_path) in dir_info("test_cases"):
        for (allocator, allocator_path) in dir_info("allocators"):
            print(f"{test_case}; {allocator}")
            run_cpp(["common/common.cpp", \
                     allocator_path,
                     "common/items.cpp",
                     test_case_path])
        print()

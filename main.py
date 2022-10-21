from subprocess import run
from os import listdir

cache = {}

def include(file_path: str) -> str:
    if file_path not in cache:
        with open(file_path) as f:
            cache[file_path] = f.read()
    return cache[file_path]

def file_paths(dir_path: str):
    for file_name in listdir(dir_path):
        file_path = f"{dir_path}/{file_name}"
        yield file_name, file_path

if __name__ == "__main__":
    for (allocator, allocator_path) in file_paths("allocators"):
        for (test_case, test_case_path) in file_paths("test_cases"):
            with open("_main.cpp", "w+") as f:
                code = "\n".join(
                    [include("common/common.cpp"),
                     include(allocator_path),
                     include("common/items.cpp"),
                     include(test_case_path)])
                f.write(code)
            run("clang _main.cpp -o _main.exe -O3".split(" "), check=True)
            print(f"{allocator}/{test_case}")
            run("./_main.exe".split(" "), check=True)

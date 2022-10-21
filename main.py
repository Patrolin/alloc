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
    if False:
        if "stack.cpp" in file_names:
            file_names.remove("stack.cpp")
            file_names.insert(0, "stack.cpp")
    for file_name in file_names:
        file_path = f"{dir_path}/{file_name}"
        yield file_name, file_path

if __name__ == "__main__":
    for (test_case, test_case_path) in dir_info("test_cases"):
        for (allocator, allocator_path) in dir_info("allocators"):
            print(f"{test_case.removesuffix('.cpp')}/{allocator.removesuffix('.cpp')}")
            with open("_main.cpp", "w+") as f:
                code = "\n".join(
                    [include("common/common.cpp"),
                     include(allocator_path),
                     include("common/items.cpp"),
                     include(test_case_path)])
                f.write(code)
            run("clang _main.cpp -o _main.exe -O3".split(" "), check=True)
            run("./_main.exe".split(" "), check=True)
        print()

@echo off

IF NOT EXIST Build (
    MKDIR Build
)

CD Build
CMAKE -DCMAKE_TOOLCHAIN_FILE="%VCPKG_ROOT%\scripts\buildsystems\vcpkg.cmake" ../
CD ../
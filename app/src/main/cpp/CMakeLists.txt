# For more information about using CMake with Android Studio, read the
# documentation: https://d.android.com/studio/projects/add-native-code.html

# Sets the minimum version of CMake required to build the native library.

cmake_minimum_required(VERSION 3.4.1)

# Creates and names a library, sets it as either STATIC
# or SHARED, and provides the relative paths to its source code.
# You can define multiple libraries, and CMake builds them for you.
# Gradle automatically packages shared libraries with your APK.

add_library( # Sets the name of the library.
        native-lib

        # Sets the library as a shared library.
        SHARED

        # Provides a relative path to your source file(s).
        lame/bitstream.c
        lame/bitstream.h
        lame/encoder.c
        lame/encoder.h
        lame/fft.c
        lame/fft.h
        lame/gain_analysis.c
        lame/gain_analysis.h
        lame/id3tag.c
        lame/id3tag.h
        lame/lame.c
        lame/lame.h
        lame/lame-analysis.h
        lame/lame_global_flags.h
        lame/lameerror.h
        lame/machine.h
        lame/mpglib_interface.c
        lame/newmdct.c
        lame/newmdct.h
        lame/presets.c
        lame/psymodel.c
        lame/psymodel.h
        lame/quantize.c
        lame/quantize.h
        lame/quantize_pvt.c
        lame/quantize_pvt.h
        lame/reservoir.c
        lame/reservoir.h
        lame/set_get.c
        lame/set_get.h
        lame/tables.c
        lame/tables.h
        lame/takehiro.c
        lame/util.c
        lame/util.h
        lame/vbrquantize.c
        lame/vbrquantize.h
        lame/VbrTag.c
        lame/VbrTag.h
        lame/version.c
        lame/version.h
        native-lib.cpp)

# Searches for a specified prebuilt library and stores the path as a
# variable. Because CMake includes system libraries in the search path by
# default, you only need to specify the name of the public NDK library
# you want to add. CMake verifies that the library exists before
# completing its build.

find_library( # Sets the name of the path variable.
        log-lib

        # Specifies the name of the NDK library that
        # you want CMake to locate.
        log)

# Specifies libraries CMake should link to your target library. You
# can link multiple libraries, such as libraries you define in this
# build script, prebuilt third-party libraries, or system libraries.

target_link_libraries( # Specifies the target library.
        native-lib

        # Links the target library to the log library
        # included in the NDK.
        ${log-lib})
###How to use ?

###Download the Demo and uncompressed it.

Then you need to compile FFmpeg. 

###Compile FFmpeg for iOS, support armv7s , armvs7 & i386 simulator.

    iOS 7 version not support x.264 module
    iOS 6 version support x.264 module ( version 1.0 )

###iOS 7 & XCode Version Requirement

    XCode 5 or later
    iOS 7 or later

###How to use FFmpeg?
Download & Compile FFmpeg

    git clone git@github.com:SEB-Appstore/ffmpegc-mirror.git
    cd ffmpegc-mirror
    ./install-ffmpeg.sh

You can find output in "ffmpegc-mirror/build/built/universal".

    Copy lib/*.a files to your demo project lib folder (copy to project).
    Copy include/* folders to your demo project include folder (copy to project).

iOS 6 Version Requirement(Old Version)

You can find old version in release tabs.

    XCode 4.*
    CommandLine Tools
    iOS 6.*

###Custom

1.Change ffmpeg version:
Change this line on install-ffmpeg.sh file:

VERSION="2.0.2" 

2.Change iOSSDK version:
Change this line on each compile-*.sh file:

SDKVERSION="7.1"    

###Occur mistake?

1. You may not install XCode command-line tools
2. /usr/sbin/gas-preprocessor.pl file exists. "sudo rm /usr/sbin/gas-preprocessor.pl" 
3. please check your _gas-preprocessor.pl_ path, more details see [issue#4](https://github.com/lvjian700/ffmpegc/issues/4)	
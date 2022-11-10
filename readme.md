# ILRewriter - IL patcher for .net applications

## Overview

This project is a simple nonintrusive intermediate language patcher for .net (including .net framework) applications based on [CLR Profiling API](https://learn.microsoft.com/en-us/dotnet/framework/unmanaged-api/profiling/profiling-overview). Its main purpose is to modify application behavior when you have lost its source code or are not able to build it from source.

ILRewriter dll is loaded in the target process using environment variables configuration and patches target method instructions right before it is JIT compiled using [ICorProfilerInfo::SetILFunctionBody](https://learn.microsoft.com/en-us/dotnet/framework/unmanaged-api/profiling/icorprofilerinfo-setilfunctionbody-method) API.

## Configuration

In order for the ILRewriter to be loaded into the target process the following environment variables should be defined (replace COR with CORECLR for .net core and .net 5+ applications):

* COR_ENABLE_PROFILING=1
* COR_PROFILER={b45048d5-6f44-4fbe-ae88-b468a5e4927a}
* COR_PROFILER_PATH_64=**full path to ILRewriter.dll**
* ILREWRITER_MDTOKEN=**MD Token of the target method in decimal format**
* ILREWRITER_PATCH=**offset=IL byte code pairs separated with semicolon**

Sample configuration file:

    SET COR_ENABLE_PROFILING=1
    SET COR_PROFILER={b45048d5-6f44-4fbe-ae88-b468a5e4927a}
    SET COR_PROFILER_PATH_64=c:\temp\ILRewriter.dll
    SET ILREWRITER_MDTOKEN=107965719
    SET ILREWRITER_PATCH=100=23;11=0
    
This configuration will wait for the method with MD Token 107965719 to be JIT compiled and replace bytes at offsets 198 and 199 with 23 (IL ldc.i4.1) and 0 (IL nop).

## Building

Application requires MS Visual Studio (C++ and ATL workloads) and latest windows and .net SDKs to be installed.
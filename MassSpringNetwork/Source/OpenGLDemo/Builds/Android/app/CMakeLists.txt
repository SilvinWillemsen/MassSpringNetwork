# Automatically generated makefile, created by the Projucer
# Don't edit this file! Your changes will be overwritten when you re-save the Projucer project!

cmake_minimum_required(VERSION 3.4.1)

SET(BINARY_NAME "juce_jni")

add_library("cpufeatures" STATIC "${ANDROID_NDK}/sources/android/cpufeatures/cpu-features.c")
set_source_files_properties("${ANDROID_NDK}/sources/android/cpufeatures/cpu-features.c" PROPERTIES COMPILE_FLAGS "-Wno-sign-conversion -Wno-gnu-statement-expression")

add_definitions("-DJUCE_ANDROID=1" "-DJUCE_ANDROID_API_VERSION=10" "-DJUCE_ANDROID_ACTIVITY_CLASSNAME=com_juce_opengldemo_OpenGLDemo" "-DJUCE_ANDROID_ACTIVITY_CLASSPATH=\"com/juce/opengldemo/OpenGLDemo\"" "-DJUCE_ANDROID_SHARING_CONTENT_PROVIDER_CLASSNAME=com_juce_opengldemo_SharingContentProvider" "-DJUCE_ANDROID_SHARING_CONTENT_PROVIDER_CLASSPATH=\"com/juce/opengldemo/SharingContentProvider\"" "-DJUCE_PUSH_NOTIFICATIONS=1" "-DPIP_JUCE_EXAMPLES_DIRECTORY=L1VzZXJzL1NpbHZpblcvcmVwb3NpdG9yaWVzL25ld0pVQ0UvSlVDRS9leGFtcGxlcw==" "-DJUCER_ANDROIDSTUDIO_7F0E4A25=1" "-DJUCE_APP_VERSION=1.0.0" "-DJUCE_APP_VERSION_HEX=0x10000")

include_directories( AFTER
    "../../../JuceLibraryCode"
    "/Users/SilvinW/repositories/newJUCE/JUCE/modules"
    "${ANDROID_NDK}/sources/android/cpufeatures"
)

enable_language(ASM)

IF(JUCE_BUILD_CONFIGURATION MATCHES "DEBUG")
    add_definitions("-DDEBUG=1" "-D_DEBUG=1")
ELSEIF(JUCE_BUILD_CONFIGURATION MATCHES "RELEASE")
    add_definitions("-DNDEBUG=1")
ELSE(JUCE_BUILD_CONFIGURATION MATCHES "DEBUG")
    MESSAGE( FATAL_ERROR "No matching build-configuration found." )
ENDIF(JUCE_BUILD_CONFIGURATION MATCHES "DEBUG")

add_library( ${BINARY_NAME}

    SHARED

    "../../../Source/Main.cpp"
    "../../../Source/OpenGLDemo.h"
    "../../../Source/DemoUtilities.h"
    "../../../Source/WavefrontObjParser.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/containers/juce_AbstractFifo.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/containers/juce_AbstractFifo.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/containers/juce_Array.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/containers/juce_ArrayAllocationBase.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/containers/juce_ArrayBase.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/containers/juce_ArrayBase.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/containers/juce_DynamicObject.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/containers/juce_DynamicObject.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/containers/juce_ElementComparator.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/containers/juce_HashMap.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/containers/juce_HashMap_test.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/containers/juce_LinkedListPointer.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/containers/juce_ListenerList.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/containers/juce_NamedValueSet.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/containers/juce_NamedValueSet.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/containers/juce_OwnedArray.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/containers/juce_OwnedArray.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/containers/juce_PropertySet.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/containers/juce_PropertySet.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/containers/juce_ReferenceCountedArray.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/containers/juce_ReferenceCountedArray.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/containers/juce_ScopedValueSetter.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/containers/juce_SortedSet.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/containers/juce_SparseSet.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/containers/juce_SparseSet.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/containers/juce_Variant.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/containers/juce_Variant.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/files/juce_DirectoryIterator.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/files/juce_DirectoryIterator.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/files/juce_File.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/files/juce_File.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/files/juce_FileFilter.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/files/juce_FileFilter.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/files/juce_FileInputStream.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/files/juce_FileInputStream.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/files/juce_FileOutputStream.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/files/juce_FileOutputStream.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/files/juce_FileSearchPath.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/files/juce_FileSearchPath.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/files/juce_MemoryMappedFile.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/files/juce_TemporaryFile.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/files/juce_TemporaryFile.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/files/juce_WildcardFileFilter.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/files/juce_WildcardFileFilter.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/javascript/juce_Javascript.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/javascript/juce_Javascript.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/javascript/juce_JSON.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/javascript/juce_JSON.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/logging/juce_FileLogger.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/logging/juce_FileLogger.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/logging/juce_Logger.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/logging/juce_Logger.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/maths/juce_BigInteger.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/maths/juce_BigInteger.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/maths/juce_Expression.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/maths/juce_Expression.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/maths/juce_MathsFunctions.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/maths/juce_NormalisableRange.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/maths/juce_Random.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/maths/juce_Random.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/maths/juce_Range.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/maths/juce_StatisticsAccumulator.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/memory/juce_Atomic.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/memory/juce_ByteOrder.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/memory/juce_ContainerDeletePolicy.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/memory/juce_HeapBlock.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/memory/juce_HeavyweightLeakedObjectDetector.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/memory/juce_LeakedObjectDetector.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/memory/juce_Memory.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/memory/juce_MemoryBlock.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/memory/juce_MemoryBlock.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/memory/juce_OptionalScopedPointer.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/memory/juce_ReferenceCountedObject.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/memory/juce_ScopedPointer.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/memory/juce_SharedResourcePointer.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/memory/juce_Singleton.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/memory/juce_WeakReference.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/misc/juce_ConsoleApplication.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/misc/juce_ConsoleApplication.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/misc/juce_Result.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/misc/juce_Result.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/misc/juce_RuntimePermissions.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/misc/juce_RuntimePermissions.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/misc/juce_StdFunctionCompat.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/misc/juce_StdFunctionCompat.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/misc/juce_Uuid.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/misc/juce_Uuid.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/misc/juce_WindowsRegistry.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/native/juce_android_Files.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/native/juce_android_JNIHelpers.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/native/juce_android_Misc.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/native/juce_android_Network.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/native/juce_android_RuntimePermissions.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/native/juce_android_SystemStats.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/native/juce_android_Threads.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/native/juce_BasicNativeHeaders.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/native/juce_curl_Network.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/native/juce_linux_CommonFile.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/native/juce_linux_Files.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/native/juce_linux_Network.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/native/juce_linux_SystemStats.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/native/juce_linux_Threads.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/native/juce_mac_ClangBugWorkaround.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/native/juce_mac_Files.mm"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/native/juce_mac_Network.mm"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/native/juce_mac_Strings.mm"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/native/juce_mac_SystemStats.mm"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/native/juce_mac_Threads.mm"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/native/juce_osx_ObjCHelpers.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/native/juce_posix_IPAddress.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/native/juce_posix_NamedPipe.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/native/juce_posix_SharedCode.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/native/juce_win32_ComSmartPtr.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/native/juce_win32_Files.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/native/juce_win32_Network.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/native/juce_win32_Registry.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/native/juce_win32_SystemStats.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/native/juce_win32_Threads.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/network/juce_IPAddress.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/network/juce_IPAddress.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/network/juce_MACAddress.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/network/juce_MACAddress.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/network/juce_NamedPipe.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/network/juce_NamedPipe.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/network/juce_Socket.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/network/juce_Socket.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/network/juce_URL.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/network/juce_URL.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/network/juce_WebInputStream.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/network/juce_WebInputStream.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/streams/juce_BufferedInputStream.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/streams/juce_BufferedInputStream.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/streams/juce_FileInputSource.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/streams/juce_FileInputSource.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/streams/juce_InputSource.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/streams/juce_InputStream.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/streams/juce_InputStream.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/streams/juce_MemoryInputStream.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/streams/juce_MemoryInputStream.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/streams/juce_MemoryOutputStream.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/streams/juce_MemoryOutputStream.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/streams/juce_OutputStream.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/streams/juce_OutputStream.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/streams/juce_SubregionStream.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/streams/juce_SubregionStream.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/streams/juce_URLInputSource.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/streams/juce_URLInputSource.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/system/juce_CompilerSupport.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/system/juce_PlatformDefs.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/system/juce_StandardHeader.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/system/juce_SystemStats.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/system/juce_SystemStats.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/system/juce_TargetPlatform.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/text/juce_Base64.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/text/juce_Base64.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/text/juce_CharacterFunctions.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/text/juce_CharacterFunctions.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/text/juce_CharPointer_ASCII.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/text/juce_CharPointer_UTF8.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/text/juce_CharPointer_UTF16.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/text/juce_CharPointer_UTF32.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/text/juce_Identifier.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/text/juce_Identifier.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/text/juce_LocalisedStrings.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/text/juce_LocalisedStrings.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/text/juce_NewLine.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/text/juce_String.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/text/juce_String.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/text/juce_StringArray.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/text/juce_StringArray.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/text/juce_StringPairArray.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/text/juce_StringPairArray.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/text/juce_StringPool.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/text/juce_StringPool.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/text/juce_StringRef.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/text/juce_TextDiff.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/text/juce_TextDiff.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/threads/juce_ChildProcess.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/threads/juce_ChildProcess.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/threads/juce_CriticalSection.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/threads/juce_DynamicLibrary.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/threads/juce_HighResolutionTimer.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/threads/juce_HighResolutionTimer.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/threads/juce_InterProcessLock.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/threads/juce_Process.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/threads/juce_ReadWriteLock.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/threads/juce_ReadWriteLock.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/threads/juce_ScopedLock.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/threads/juce_ScopedReadLock.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/threads/juce_ScopedWriteLock.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/threads/juce_SpinLock.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/threads/juce_Thread.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/threads/juce_Thread.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/threads/juce_ThreadLocalValue.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/threads/juce_ThreadPool.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/threads/juce_ThreadPool.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/threads/juce_TimeSliceThread.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/threads/juce_TimeSliceThread.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/threads/juce_WaitableEvent.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/time/juce_PerformanceCounter.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/time/juce_PerformanceCounter.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/time/juce_RelativeTime.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/time/juce_RelativeTime.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/time/juce_Time.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/time/juce_Time.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/unit_tests/juce_UnitTest.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/unit_tests/juce_UnitTest.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/xml/juce_XmlDocument.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/xml/juce_XmlDocument.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/xml/juce_XmlElement.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/xml/juce_XmlElement.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/zip/zlib/adler32.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/zip/zlib/compress.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/zip/zlib/crc32.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/zip/zlib/crc32.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/zip/zlib/deflate.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/zip/zlib/deflate.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/zip/zlib/infback.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/zip/zlib/inffast.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/zip/zlib/inffast.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/zip/zlib/inffixed.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/zip/zlib/inflate.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/zip/zlib/inflate.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/zip/zlib/inftrees.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/zip/zlib/inftrees.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/zip/zlib/trees.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/zip/zlib/trees.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/zip/zlib/uncompr.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/zip/zlib/zconf.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/zip/zlib/zconf.in.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/zip/zlib/zlib.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/zip/zlib/zutil.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/zip/zlib/zutil.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/zip/juce_GZIPCompressorOutputStream.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/zip/juce_GZIPCompressorOutputStream.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/zip/juce_GZIPDecompressorInputStream.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/zip/juce_GZIPDecompressorInputStream.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/zip/juce_ZipFile.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/zip/juce_ZipFile.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/juce_core.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/juce_core.mm"
    "../../../../../../../newJUCE/JUCE/modules/juce_core/juce_core.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_data_structures/app_properties/juce_ApplicationProperties.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_data_structures/app_properties/juce_ApplicationProperties.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_data_structures/app_properties/juce_PropertiesFile.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_data_structures/app_properties/juce_PropertiesFile.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_data_structures/undomanager/juce_UndoableAction.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_data_structures/undomanager/juce_UndoManager.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_data_structures/undomanager/juce_UndoManager.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_data_structures/values/juce_CachedValue.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_data_structures/values/juce_CachedValue.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_data_structures/values/juce_Value.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_data_structures/values/juce_Value.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_data_structures/values/juce_ValueTree.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_data_structures/values/juce_ValueTree.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_data_structures/values/juce_ValueWithDefault.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_data_structures/juce_data_structures.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_data_structures/juce_data_structures.mm"
    "../../../../../../../newJUCE/JUCE/modules/juce_data_structures/juce_data_structures.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_events/broadcasters/juce_ActionBroadcaster.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_events/broadcasters/juce_ActionBroadcaster.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_events/broadcasters/juce_ActionListener.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_events/broadcasters/juce_AsyncUpdater.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_events/broadcasters/juce_AsyncUpdater.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_events/broadcasters/juce_ChangeBroadcaster.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_events/broadcasters/juce_ChangeBroadcaster.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_events/broadcasters/juce_ChangeListener.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_events/interprocess/juce_ConnectedChildProcess.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_events/interprocess/juce_ConnectedChildProcess.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_events/interprocess/juce_InterprocessConnection.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_events/interprocess/juce_InterprocessConnection.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_events/interprocess/juce_InterprocessConnectionServer.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_events/interprocess/juce_InterprocessConnectionServer.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_events/interprocess/juce_NetworkServiceDiscovery.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_events/interprocess/juce_NetworkServiceDiscovery.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_events/messages/juce_ApplicationBase.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_events/messages/juce_ApplicationBase.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_events/messages/juce_CallbackMessage.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_events/messages/juce_DeletedAtShutdown.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_events/messages/juce_DeletedAtShutdown.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_events/messages/juce_Initialisation.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_events/messages/juce_Message.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_events/messages/juce_MessageListener.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_events/messages/juce_MessageListener.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_events/messages/juce_MessageManager.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_events/messages/juce_MessageManager.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_events/messages/juce_MountedVolumeListChangeDetector.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_events/messages/juce_NotificationType.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_events/native/juce_android_Messaging.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_events/native/juce_ios_MessageManager.mm"
    "../../../../../../../newJUCE/JUCE/modules/juce_events/native/juce_linux_EventLoop.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_events/native/juce_linux_Messaging.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_events/native/juce_mac_MessageManager.mm"
    "../../../../../../../newJUCE/JUCE/modules/juce_events/native/juce_osx_MessageQueue.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_events/native/juce_win32_HiddenMessageWindow.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_events/native/juce_win32_Messaging.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_events/native/juce_win32_WinRTWrapper.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_events/native/juce_win32_WinRTWrapper.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_events/timers/juce_MultiTimer.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_events/timers/juce_MultiTimer.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_events/timers/juce_Timer.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_events/timers/juce_Timer.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_events/juce_events.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_events/juce_events.mm"
    "../../../../../../../newJUCE/JUCE/modules/juce_events/juce_events.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/colour/juce_Colour.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/colour/juce_Colour.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/colour/juce_ColourGradient.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/colour/juce_ColourGradient.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/colour/juce_Colours.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/colour/juce_Colours.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/colour/juce_FillType.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/colour/juce_FillType.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/colour/juce_PixelFormats.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/contexts/juce_GraphicsContext.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/contexts/juce_GraphicsContext.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsContext.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsPostScriptRenderer.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsPostScriptRenderer.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsSoftwareRenderer.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsSoftwareRenderer.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/effects/juce_DropShadowEffect.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/effects/juce_DropShadowEffect.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/effects/juce_GlowEffect.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/effects/juce_GlowEffect.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/effects/juce_ImageEffectFilter.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/fonts/juce_AttributedString.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/fonts/juce_AttributedString.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/fonts/juce_CustomTypeface.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/fonts/juce_CustomTypeface.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/fonts/juce_Font.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/fonts/juce_Font.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/fonts/juce_GlyphArrangement.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/fonts/juce_GlyphArrangement.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/fonts/juce_TextLayout.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/fonts/juce_TextLayout.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/fonts/juce_Typeface.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/fonts/juce_Typeface.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/geometry/juce_AffineTransform.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/geometry/juce_AffineTransform.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/geometry/juce_BorderSize.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/geometry/juce_EdgeTable.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/geometry/juce_EdgeTable.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/geometry/juce_Line.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/geometry/juce_Parallelogram.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/geometry/juce_Path.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/geometry/juce_Path.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/geometry/juce_PathIterator.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/geometry/juce_PathIterator.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/geometry/juce_PathStrokeType.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/geometry/juce_PathStrokeType.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/geometry/juce_Point.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/geometry/juce_Rectangle.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/geometry/juce_RectangleList.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/cderror.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/changes to libjpeg for JUCE.txt"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jcapimin.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jcapistd.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jccoefct.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jccolor.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jcdctmgr.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jchuff.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jchuff.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jcinit.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jcmainct.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jcmarker.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jcmaster.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jcomapi.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jconfig.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jcparam.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jcphuff.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jcprepct.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jcsample.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jctrans.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jdapimin.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jdapistd.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jdatasrc.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jdcoefct.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jdcolor.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jdct.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jddctmgr.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jdhuff.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jdhuff.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jdinput.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jdmainct.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jdmarker.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jdmaster.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jdmerge.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jdphuff.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jdpostct.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jdsample.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jdtrans.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jerror.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jerror.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctflt.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctfst.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctint.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jidctflt.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jidctfst.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jidctint.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jidctred.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jinclude.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jmemmgr.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jmemnobs.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jmemsys.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jmorecfg.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jpegint.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jpeglib.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jquant1.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jquant2.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jutils.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jversion.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/transupp.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/transupp.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/pnglib/libpng_readme.txt"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/pnglib/png.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/pnglib/png.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/pnglib/pngconf.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/pnglib/pngerror.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/pnglib/pngget.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/pnglib/pnginfo.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/pnglib/pngmem.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/pnglib/pngpread.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/pnglib/pngpriv.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/pnglib/pngread.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/pnglib/pngrio.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/pnglib/pngrtran.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/pnglib/pngrutil.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/pnglib/pngset.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/pnglib/pngstruct.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/pnglib/pngtrans.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/pnglib/pngwio.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/pnglib/pngwrite.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/pnglib/pngwtran.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/pnglib/pngwutil.c"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/juce_GIFLoader.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/juce_JPEGLoader.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/juce_PNGLoader.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/images/juce_Image.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/images/juce_Image.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/images/juce_ImageCache.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/images/juce_ImageCache.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/images/juce_ImageConvolutionKernel.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/images/juce_ImageConvolutionKernel.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/images/juce_ImageFileFormat.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/images/juce_ImageFileFormat.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/native/juce_android_Fonts.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/native/juce_android_GraphicsContext.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/native/juce_android_IconHelpers.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/native/juce_freetype_Fonts.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/native/juce_linux_Fonts.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/native/juce_linux_IconHelpers.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsContext.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsContext.mm"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsHelpers.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/native/juce_mac_Fonts.mm"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/native/juce_mac_IconHelpers.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/native/juce_RenderingHelpers.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/native/juce_win32_Direct2DGraphicsContext.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/native/juce_win32_Direct2DGraphicsContext.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/native/juce_win32_DirectWriteTypeface.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/native/juce_win32_DirectWriteTypeLayout.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/native/juce_win32_Fonts.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/native/juce_win32_IconHelpers.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/placement/juce_Justification.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/placement/juce_RectanglePlacement.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/placement/juce_RectanglePlacement.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/juce_graphics.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/juce_graphics.mm"
    "../../../../../../../newJUCE/JUCE/modules/juce_graphics/juce_graphics.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/application/juce_Application.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/application/juce_Application.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/buttons/juce_ArrowButton.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/buttons/juce_ArrowButton.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/buttons/juce_Button.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/buttons/juce_Button.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/buttons/juce_DrawableButton.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/buttons/juce_DrawableButton.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/buttons/juce_HyperlinkButton.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/buttons/juce_HyperlinkButton.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/buttons/juce_ImageButton.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/buttons/juce_ImageButton.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/buttons/juce_ShapeButton.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/buttons/juce_ShapeButton.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/buttons/juce_TextButton.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/buttons/juce_TextButton.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/buttons/juce_ToggleButton.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/buttons/juce_ToggleButton.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/buttons/juce_ToolbarButton.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/buttons/juce_ToolbarButton.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandID.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandInfo.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandInfo.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandManager.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandManager.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandTarget.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandTarget.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/commands/juce_KeyPressMappingSet.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/commands/juce_KeyPressMappingSet.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/components/juce_CachedComponentImage.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/components/juce_Component.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/components/juce_Component.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/components/juce_ComponentListener.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/components/juce_ComponentListener.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/components/juce_ModalComponentManager.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/components/juce_ModalComponentManager.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/desktop/juce_Desktop.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/desktop/juce_Desktop.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/desktop/juce_Displays.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/desktop/juce_Displays.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/drawables/juce_Drawable.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/drawables/juce_Drawable.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/drawables/juce_DrawableComposite.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/drawables/juce_DrawableComposite.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/drawables/juce_DrawableImage.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/drawables/juce_DrawableImage.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/drawables/juce_DrawablePath.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/drawables/juce_DrawablePath.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/drawables/juce_DrawableRectangle.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/drawables/juce_DrawableRectangle.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/drawables/juce_DrawableShape.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/drawables/juce_DrawableShape.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/drawables/juce_DrawableText.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/drawables/juce_DrawableText.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/drawables/juce_SVGParser.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/filebrowser/juce_ContentSharer.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/filebrowser/juce_ContentSharer.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsDisplayComponent.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsDisplayComponent.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsList.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsList.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserComponent.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserComponent.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserListener.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooser.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooser.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooserDialogBox.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooserDialogBox.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/filebrowser/juce_FileListComponent.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/filebrowser/juce_FileListComponent.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/filebrowser/juce_FilenameComponent.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/filebrowser/juce_FilenameComponent.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/filebrowser/juce_FilePreviewComponent.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/filebrowser/juce_FileSearchPathListComponent.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/filebrowser/juce_FileSearchPathListComponent.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/filebrowser/juce_FileTreeComponent.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/filebrowser/juce_FileTreeComponent.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/filebrowser/juce_ImagePreviewComponent.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/filebrowser/juce_ImagePreviewComponent.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/keyboard/juce_CaretComponent.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/keyboard/juce_CaretComponent.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/keyboard/juce_KeyboardFocusTraverser.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/keyboard/juce_KeyboardFocusTraverser.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/keyboard/juce_KeyListener.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/keyboard/juce_KeyListener.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/keyboard/juce_KeyPress.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/keyboard/juce_KeyPress.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/keyboard/juce_ModifierKeys.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/keyboard/juce_ModifierKeys.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/keyboard/juce_SystemClipboard.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/keyboard/juce_TextEditorKeyMapper.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/keyboard/juce_TextInputTarget.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_AnimatedPosition.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_AnimatedPositionBehaviours.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_ComponentAnimator.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_ComponentAnimator.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_ComponentBoundsConstrainer.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_ComponentBoundsConstrainer.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_ComponentBuilder.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_ComponentBuilder.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_ComponentMovementWatcher.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_ComponentMovementWatcher.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_ConcertinaPanel.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_ConcertinaPanel.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_FlexBox.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_FlexBox.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_FlexItem.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_Grid.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_Grid.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_GridItem.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_GridItem.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_GridUnitTests.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_GroupComponent.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_GroupComponent.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_MultiDocumentPanel.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_MultiDocumentPanel.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_ResizableBorderComponent.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_ResizableBorderComponent.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_ResizableCornerComponent.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_ResizableCornerComponent.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_ResizableEdgeComponent.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_ResizableEdgeComponent.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_ScrollBar.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_ScrollBar.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_SidePanel.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_SidePanel.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutManager.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutManager.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutResizerBar.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutResizerBar.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_StretchableObjectResizer.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_StretchableObjectResizer.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_TabbedButtonBar.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_TabbedButtonBar.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_TabbedComponent.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_TabbedComponent.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_Viewport.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_Viewport.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V1.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V1.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V2.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V2.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V3.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V3.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V4.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V4.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/menus/juce_BurgerMenuComponent.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/menus/juce_BurgerMenuComponent.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/menus/juce_MenuBarComponent.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/menus/juce_MenuBarComponent.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/menus/juce_MenuBarModel.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/menus/juce_MenuBarModel.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/menus/juce_PopupMenu.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/menus/juce_PopupMenu.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/misc/juce_BubbleComponent.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/misc/juce_BubbleComponent.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/misc/juce_DropShadower.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/misc/juce_DropShadower.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/misc/juce_JUCESplashScreen.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/misc/juce_JUCESplashScreen.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/mouse/juce_ComponentDragger.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/mouse/juce_ComponentDragger.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropContainer.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropContainer.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropTarget.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/mouse/juce_FileDragAndDropTarget.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/mouse/juce_LassoComponent.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/mouse/juce_MouseCursor.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/mouse/juce_MouseCursor.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/mouse/juce_MouseEvent.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/mouse/juce_MouseEvent.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/mouse/juce_MouseInactivityDetector.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/mouse/juce_MouseInactivityDetector.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/mouse/juce_MouseInputSource.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/mouse/juce_MouseInputSource.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/mouse/juce_MouseListener.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/mouse/juce_MouseListener.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/mouse/juce_SelectedItemSet.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/mouse/juce_TextDragAndDropTarget.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/mouse/juce_TooltipClient.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/native/juce_android_ContentSharer.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/native/juce_android_FileChooser.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/native/juce_android_Windowing.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/native/juce_common_MimeTypes.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/native/juce_ios_ContentSharer.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/native/juce_ios_FileChooser.mm"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/native/juce_ios_UIViewComponentPeer.mm"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/native/juce_ios_Windowing.mm"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/native/juce_linux_FileChooser.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/native/juce_linux_X11.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/native/juce_linux_X11.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/native/juce_linux_X11_Clipboard.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/native/juce_linux_X11_Windowing.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/native/juce_mac_FileChooser.mm"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/native/juce_mac_MainMenu.mm"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/native/juce_mac_MouseCursor.mm"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/native/juce_mac_NSViewComponentPeer.mm"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/native/juce_mac_Windowing.mm"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/native/juce_MultiTouchMapper.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/native/juce_win32_DragAndDrop.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/native/juce_win32_FileChooser.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/native/juce_win32_Windowing.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/positioning/juce_MarkerList.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/positioning/juce_MarkerList.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinate.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinate.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinatePositioner.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinatePositioner.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/positioning/juce_RelativeParallelogram.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/positioning/juce_RelativeParallelogram.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/positioning/juce_RelativePoint.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/positioning/juce_RelativePoint.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/positioning/juce_RelativePointPath.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/positioning/juce_RelativePointPath.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/positioning/juce_RelativeRectangle.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/positioning/juce_RelativeRectangle.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/properties/juce_BooleanPropertyComponent.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/properties/juce_BooleanPropertyComponent.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/properties/juce_ButtonPropertyComponent.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/properties/juce_ButtonPropertyComponent.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/properties/juce_ChoicePropertyComponent.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/properties/juce_ChoicePropertyComponent.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/properties/juce_MultiChoicePropertyComponent.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/properties/juce_MultiChoicePropertyComponent.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/properties/juce_PropertyComponent.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/properties/juce_PropertyComponent.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/properties/juce_PropertyPanel.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/properties/juce_PropertyPanel.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/properties/juce_SliderPropertyComponent.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/properties/juce_SliderPropertyComponent.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/properties/juce_TextPropertyComponent.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/properties/juce_TextPropertyComponent.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/widgets/juce_ComboBox.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/widgets/juce_ComboBox.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/widgets/juce_ImageComponent.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/widgets/juce_ImageComponent.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/widgets/juce_Label.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/widgets/juce_Label.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/widgets/juce_ListBox.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/widgets/juce_ListBox.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/widgets/juce_ProgressBar.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/widgets/juce_ProgressBar.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/widgets/juce_Slider.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/widgets/juce_Slider.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/widgets/juce_TableHeaderComponent.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/widgets/juce_TableHeaderComponent.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/widgets/juce_TableListBox.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/widgets/juce_TableListBox.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/widgets/juce_TextEditor.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/widgets/juce_TextEditor.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/widgets/juce_Toolbar.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/widgets/juce_Toolbar.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemComponent.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemComponent.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemFactory.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemPalette.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemPalette.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/widgets/juce_TreeView.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/widgets/juce_TreeView.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/windows/juce_AlertWindow.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/windows/juce_AlertWindow.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/windows/juce_CallOutBox.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/windows/juce_CallOutBox.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/windows/juce_ComponentPeer.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/windows/juce_ComponentPeer.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/windows/juce_DialogWindow.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/windows/juce_DialogWindow.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/windows/juce_DocumentWindow.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/windows/juce_DocumentWindow.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/windows/juce_NativeMessageBox.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/windows/juce_ResizableWindow.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/windows/juce_ResizableWindow.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/windows/juce_ThreadWithProgressWindow.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/windows/juce_ThreadWithProgressWindow.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/windows/juce_TooltipWindow.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/windows/juce_TooltipWindow.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/windows/juce_TopLevelWindow.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/windows/juce_TopLevelWindow.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/juce_gui_basics.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/juce_gui_basics.mm"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/juce_gui_basics.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/code_editor/juce_CodeDocument.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/code_editor/juce_CodeDocument.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/code_editor/juce_CodeEditorComponent.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/code_editor/juce_CodeEditorComponent.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/code_editor/juce_CodeTokeniser.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniser.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniser.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniserFunctions.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/code_editor/juce_LuaCodeTokeniser.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/code_editor/juce_LuaCodeTokeniser.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/code_editor/juce_XMLCodeTokeniser.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/code_editor/juce_XMLCodeTokeniser.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/documents/juce_FileBasedDocument.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/documents/juce_FileBasedDocument.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/embedding/juce_ActiveXControlComponent.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/embedding/juce_AndroidViewComponent.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/embedding/juce_NSViewComponent.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/embedding/juce_ScopedDPIAwarenessDisabler.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/embedding/juce_UIViewComponent.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/embedding/juce_XEmbedComponent.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/misc/juce_AnimatedAppComponent.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/misc/juce_AnimatedAppComponent.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/misc/juce_AppleRemote.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/misc/juce_BubbleMessageComponent.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/misc/juce_BubbleMessageComponent.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/misc/juce_ColourSelector.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/misc/juce_ColourSelector.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/misc/juce_KeyMappingEditorComponent.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/misc/juce_KeyMappingEditorComponent.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/misc/juce_LiveConstantEditor.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/misc/juce_LiveConstantEditor.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/misc/juce_PreferencesPanel.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/misc/juce_PreferencesPanel.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/misc/juce_PushNotifications.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/misc/juce_PushNotifications.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/misc/juce_RecentlyOpenedFilesList.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/misc/juce_RecentlyOpenedFilesList.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/misc/juce_SplashScreen.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/misc/juce_SplashScreen.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/misc/juce_SystemTrayIconComponent.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/misc/juce_SystemTrayIconComponent.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/misc/juce_WebBrowserComponent.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/native/juce_android_PushNotifications.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/native/juce_android_WebBrowserComponent.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/native/juce_AndroidViewComponent.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/native/juce_ios_PushNotifications.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/native/juce_ios_UIViewComponent.mm"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/native/juce_linux_X11_SystemTrayIcon.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/native/juce_linux_X11_WebBrowserComponent.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/native/juce_linux_XEmbedComponent.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/native/juce_mac_AppleRemote.mm"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/native/juce_mac_CarbonViewWrapperComponent.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/native/juce_mac_NSViewComponent.mm"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/native/juce_mac_PushNotifications.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/native/juce_mac_SystemTrayIcon.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/native/juce_mac_WebBrowserComponent.mm"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/native/juce_win32_ActiveXComponent.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/native/juce_win32_SystemTrayIcon.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/native/juce_win32_WebBrowserComponent.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/juce_gui_extra.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/juce_gui_extra.mm"
    "../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/juce_gui_extra.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_opengl/geometry/juce_Draggable3DOrientation.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_opengl/geometry/juce_Matrix3D.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_opengl/geometry/juce_Quaternion.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_opengl/geometry/juce_Vector3D.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_opengl/native/juce_MissingGLDefinitions.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_opengl/native/juce_OpenGL_android.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_opengl/native/juce_OpenGL_ios.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_opengl/native/juce_OpenGL_linux_X11.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_opengl/native/juce_OpenGL_osx.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_opengl/native/juce_OpenGL_win32.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_opengl/native/juce_OpenGLExtensions.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_opengl/opengl/juce_OpenGLContext.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_opengl/opengl/juce_OpenGLContext.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_opengl/opengl/juce_OpenGLFrameBuffer.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_opengl/opengl/juce_OpenGLFrameBuffer.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_opengl/opengl/juce_OpenGLGraphicsContext.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_opengl/opengl/juce_OpenGLGraphicsContext.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_opengl/opengl/juce_OpenGLHelpers.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_opengl/opengl/juce_OpenGLHelpers.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_opengl/opengl/juce_OpenGLImage.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_opengl/opengl/juce_OpenGLImage.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_opengl/opengl/juce_OpenGLPixelFormat.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_opengl/opengl/juce_OpenGLPixelFormat.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_opengl/opengl/juce_OpenGLRenderer.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_opengl/opengl/juce_OpenGLShaderProgram.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_opengl/opengl/juce_OpenGLShaderProgram.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_opengl/opengl/juce_OpenGLTexture.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_opengl/opengl/juce_OpenGLTexture.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_opengl/utils/juce_OpenGLAppComponent.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_opengl/utils/juce_OpenGLAppComponent.h"
    "../../../../../../../newJUCE/JUCE/modules/juce_opengl/juce_opengl.cpp"
    "../../../../../../../newJUCE/JUCE/modules/juce_opengl/juce_opengl.mm"
    "../../../../../../../newJUCE/JUCE/modules/juce_opengl/juce_opengl.h"
    "../../../JuceLibraryCode/AppConfig.h"
    "../../../JuceLibraryCode/include_juce_core.cpp"
    "../../../JuceLibraryCode/include_juce_data_structures.cpp"
    "../../../JuceLibraryCode/include_juce_events.cpp"
    "../../../JuceLibraryCode/include_juce_graphics.cpp"
    "../../../JuceLibraryCode/include_juce_gui_basics.cpp"
    "../../../JuceLibraryCode/include_juce_gui_extra.cpp"
    "../../../JuceLibraryCode/include_juce_opengl.cpp"
    "../../../JuceLibraryCode/JuceHeader.h"
)

set_source_files_properties("../../../Source/OpenGLDemo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Source/DemoUtilities.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Source/WavefrontObjParser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/containers/juce_AbstractFifo.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/containers/juce_AbstractFifo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/containers/juce_Array.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/containers/juce_ArrayAllocationBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/containers/juce_ArrayBase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/containers/juce_ArrayBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/containers/juce_DynamicObject.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/containers/juce_DynamicObject.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/containers/juce_ElementComparator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/containers/juce_HashMap.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/containers/juce_HashMap_test.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/containers/juce_LinkedListPointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/containers/juce_ListenerList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/containers/juce_NamedValueSet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/containers/juce_NamedValueSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/containers/juce_OwnedArray.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/containers/juce_OwnedArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/containers/juce_PropertySet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/containers/juce_PropertySet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/containers/juce_ReferenceCountedArray.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/containers/juce_ReferenceCountedArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/containers/juce_ScopedValueSetter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/containers/juce_SortedSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/containers/juce_SparseSet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/containers/juce_SparseSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/containers/juce_Variant.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/containers/juce_Variant.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/files/juce_DirectoryIterator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/files/juce_DirectoryIterator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/files/juce_File.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/files/juce_File.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/files/juce_FileFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/files/juce_FileFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/files/juce_FileInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/files/juce_FileInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/files/juce_FileOutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/files/juce_FileOutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/files/juce_FileSearchPath.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/files/juce_FileSearchPath.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/files/juce_MemoryMappedFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/files/juce_TemporaryFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/files/juce_TemporaryFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/files/juce_WildcardFileFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/files/juce_WildcardFileFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/javascript/juce_Javascript.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/javascript/juce_Javascript.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/javascript/juce_JSON.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/javascript/juce_JSON.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/logging/juce_FileLogger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/logging/juce_FileLogger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/logging/juce_Logger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/logging/juce_Logger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/maths/juce_BigInteger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/maths/juce_BigInteger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/maths/juce_Expression.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/maths/juce_Expression.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/maths/juce_MathsFunctions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/maths/juce_NormalisableRange.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/maths/juce_Random.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/maths/juce_Random.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/maths/juce_Range.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/maths/juce_StatisticsAccumulator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/memory/juce_Atomic.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/memory/juce_ByteOrder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/memory/juce_ContainerDeletePolicy.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/memory/juce_HeapBlock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/memory/juce_HeavyweightLeakedObjectDetector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/memory/juce_LeakedObjectDetector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/memory/juce_Memory.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/memory/juce_MemoryBlock.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/memory/juce_MemoryBlock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/memory/juce_OptionalScopedPointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/memory/juce_ReferenceCountedObject.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/memory/juce_ScopedPointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/memory/juce_SharedResourcePointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/memory/juce_Singleton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/memory/juce_WeakReference.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/misc/juce_ConsoleApplication.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/misc/juce_ConsoleApplication.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/misc/juce_Result.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/misc/juce_Result.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/misc/juce_RuntimePermissions.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/misc/juce_RuntimePermissions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/misc/juce_StdFunctionCompat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/misc/juce_StdFunctionCompat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/misc/juce_Uuid.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/misc/juce_Uuid.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/misc/juce_WindowsRegistry.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/native/juce_android_Files.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/native/juce_android_JNIHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/native/juce_android_Misc.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/native/juce_android_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/native/juce_android_RuntimePermissions.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/native/juce_android_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/native/juce_android_Threads.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/native/juce_BasicNativeHeaders.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/native/juce_curl_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/native/juce_linux_CommonFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/native/juce_linux_Files.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/native/juce_linux_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/native/juce_linux_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/native/juce_linux_Threads.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/native/juce_mac_ClangBugWorkaround.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/native/juce_mac_Files.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/native/juce_mac_Network.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/native/juce_mac_Strings.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/native/juce_mac_SystemStats.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/native/juce_mac_Threads.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/native/juce_osx_ObjCHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/native/juce_posix_IPAddress.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/native/juce_posix_NamedPipe.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/native/juce_posix_SharedCode.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/native/juce_win32_ComSmartPtr.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/native/juce_win32_Files.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/native/juce_win32_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/native/juce_win32_Registry.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/native/juce_win32_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/native/juce_win32_Threads.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/network/juce_IPAddress.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/network/juce_IPAddress.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/network/juce_MACAddress.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/network/juce_MACAddress.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/network/juce_NamedPipe.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/network/juce_NamedPipe.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/network/juce_Socket.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/network/juce_Socket.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/network/juce_URL.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/network/juce_URL.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/network/juce_WebInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/network/juce_WebInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/streams/juce_BufferedInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/streams/juce_BufferedInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/streams/juce_FileInputSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/streams/juce_FileInputSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/streams/juce_InputSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/streams/juce_InputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/streams/juce_InputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/streams/juce_MemoryInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/streams/juce_MemoryInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/streams/juce_MemoryOutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/streams/juce_MemoryOutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/streams/juce_OutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/streams/juce_OutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/streams/juce_SubregionStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/streams/juce_SubregionStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/streams/juce_URLInputSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/streams/juce_URLInputSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/system/juce_CompilerSupport.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/system/juce_PlatformDefs.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/system/juce_StandardHeader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/system/juce_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/system/juce_SystemStats.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/system/juce_TargetPlatform.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/text/juce_Base64.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/text/juce_Base64.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/text/juce_CharacterFunctions.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/text/juce_CharacterFunctions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/text/juce_CharPointer_ASCII.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/text/juce_CharPointer_UTF8.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/text/juce_CharPointer_UTF16.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/text/juce_CharPointer_UTF32.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/text/juce_Identifier.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/text/juce_Identifier.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/text/juce_LocalisedStrings.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/text/juce_LocalisedStrings.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/text/juce_NewLine.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/text/juce_String.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/text/juce_String.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/text/juce_StringArray.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/text/juce_StringArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/text/juce_StringPairArray.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/text/juce_StringPairArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/text/juce_StringPool.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/text/juce_StringPool.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/text/juce_StringRef.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/text/juce_TextDiff.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/text/juce_TextDiff.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/threads/juce_ChildProcess.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/threads/juce_ChildProcess.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/threads/juce_CriticalSection.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/threads/juce_DynamicLibrary.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/threads/juce_HighResolutionTimer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/threads/juce_HighResolutionTimer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/threads/juce_InterProcessLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/threads/juce_Process.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/threads/juce_ReadWriteLock.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/threads/juce_ReadWriteLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/threads/juce_ScopedLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/threads/juce_ScopedReadLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/threads/juce_ScopedWriteLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/threads/juce_SpinLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/threads/juce_Thread.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/threads/juce_Thread.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/threads/juce_ThreadLocalValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/threads/juce_ThreadPool.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/threads/juce_ThreadPool.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/threads/juce_TimeSliceThread.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/threads/juce_TimeSliceThread.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/threads/juce_WaitableEvent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/time/juce_PerformanceCounter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/time/juce_PerformanceCounter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/time/juce_RelativeTime.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/time/juce_RelativeTime.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/time/juce_Time.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/time/juce_Time.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/unit_tests/juce_UnitTest.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/unit_tests/juce_UnitTest.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/xml/juce_XmlDocument.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/xml/juce_XmlDocument.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/xml/juce_XmlElement.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/xml/juce_XmlElement.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/zip/zlib/adler32.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/zip/zlib/compress.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/zip/zlib/crc32.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/zip/zlib/crc32.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/zip/zlib/deflate.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/zip/zlib/deflate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/zip/zlib/infback.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/zip/zlib/inffast.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/zip/zlib/inffast.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/zip/zlib/inffixed.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/zip/zlib/inflate.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/zip/zlib/inflate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/zip/zlib/inftrees.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/zip/zlib/inftrees.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/zip/zlib/trees.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/zip/zlib/trees.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/zip/zlib/uncompr.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/zip/zlib/zconf.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/zip/zlib/zconf.in.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/zip/zlib/zlib.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/zip/zlib/zutil.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/zip/zlib/zutil.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/zip/juce_GZIPCompressorOutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/zip/juce_GZIPCompressorOutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/zip/juce_GZIPDecompressorInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/zip/juce_GZIPDecompressorInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/zip/juce_ZipFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/zip/juce_ZipFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/juce_core.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/juce_core.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_core/juce_core.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_data_structures/app_properties/juce_ApplicationProperties.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_data_structures/app_properties/juce_ApplicationProperties.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_data_structures/app_properties/juce_PropertiesFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_data_structures/app_properties/juce_PropertiesFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_data_structures/undomanager/juce_UndoableAction.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_data_structures/undomanager/juce_UndoManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_data_structures/undomanager/juce_UndoManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_data_structures/values/juce_CachedValue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_data_structures/values/juce_CachedValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_data_structures/values/juce_Value.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_data_structures/values/juce_Value.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_data_structures/values/juce_ValueTree.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_data_structures/values/juce_ValueTree.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_data_structures/values/juce_ValueWithDefault.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_data_structures/juce_data_structures.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_data_structures/juce_data_structures.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_data_structures/juce_data_structures.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_events/broadcasters/juce_ActionBroadcaster.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_events/broadcasters/juce_ActionBroadcaster.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_events/broadcasters/juce_ActionListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_events/broadcasters/juce_AsyncUpdater.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_events/broadcasters/juce_AsyncUpdater.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_events/broadcasters/juce_ChangeBroadcaster.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_events/broadcasters/juce_ChangeBroadcaster.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_events/broadcasters/juce_ChangeListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_events/interprocess/juce_ConnectedChildProcess.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_events/interprocess/juce_ConnectedChildProcess.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_events/interprocess/juce_InterprocessConnection.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_events/interprocess/juce_InterprocessConnection.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_events/interprocess/juce_InterprocessConnectionServer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_events/interprocess/juce_InterprocessConnectionServer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_events/interprocess/juce_NetworkServiceDiscovery.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_events/interprocess/juce_NetworkServiceDiscovery.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_events/messages/juce_ApplicationBase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_events/messages/juce_ApplicationBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_events/messages/juce_CallbackMessage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_events/messages/juce_DeletedAtShutdown.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_events/messages/juce_DeletedAtShutdown.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_events/messages/juce_Initialisation.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_events/messages/juce_Message.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_events/messages/juce_MessageListener.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_events/messages/juce_MessageListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_events/messages/juce_MessageManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_events/messages/juce_MessageManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_events/messages/juce_MountedVolumeListChangeDetector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_events/messages/juce_NotificationType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_events/native/juce_android_Messaging.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_events/native/juce_ios_MessageManager.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_events/native/juce_linux_EventLoop.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_events/native/juce_linux_Messaging.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_events/native/juce_mac_MessageManager.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_events/native/juce_osx_MessageQueue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_events/native/juce_win32_HiddenMessageWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_events/native/juce_win32_Messaging.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_events/native/juce_win32_WinRTWrapper.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_events/native/juce_win32_WinRTWrapper.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_events/timers/juce_MultiTimer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_events/timers/juce_MultiTimer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_events/timers/juce_Timer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_events/timers/juce_Timer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_events/juce_events.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_events/juce_events.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_events/juce_events.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/colour/juce_Colour.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/colour/juce_Colour.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/colour/juce_ColourGradient.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/colour/juce_ColourGradient.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/colour/juce_Colours.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/colour/juce_Colours.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/colour/juce_FillType.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/colour/juce_FillType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/colour/juce_PixelFormats.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/contexts/juce_GraphicsContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/contexts/juce_GraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsPostScriptRenderer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsPostScriptRenderer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsSoftwareRenderer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsSoftwareRenderer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/effects/juce_DropShadowEffect.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/effects/juce_DropShadowEffect.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/effects/juce_GlowEffect.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/effects/juce_GlowEffect.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/effects/juce_ImageEffectFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/fonts/juce_AttributedString.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/fonts/juce_AttributedString.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/fonts/juce_CustomTypeface.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/fonts/juce_CustomTypeface.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/fonts/juce_Font.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/fonts/juce_Font.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/fonts/juce_GlyphArrangement.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/fonts/juce_GlyphArrangement.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/fonts/juce_TextLayout.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/fonts/juce_TextLayout.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/fonts/juce_Typeface.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/fonts/juce_Typeface.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/geometry/juce_AffineTransform.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/geometry/juce_AffineTransform.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/geometry/juce_BorderSize.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/geometry/juce_EdgeTable.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/geometry/juce_EdgeTable.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/geometry/juce_Line.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/geometry/juce_Parallelogram.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/geometry/juce_Path.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/geometry/juce_Path.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/geometry/juce_PathIterator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/geometry/juce_PathIterator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/geometry/juce_PathStrokeType.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/geometry/juce_PathStrokeType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/geometry/juce_Point.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/geometry/juce_Rectangle.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/geometry/juce_RectangleList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/cderror.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/changes to libjpeg for JUCE.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jcapimin.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jcapistd.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jccoefct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jccolor.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jcdctmgr.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jchuff.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jchuff.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jcinit.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jcmainct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jcmarker.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jcmaster.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jcomapi.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jconfig.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jcparam.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jcphuff.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jcprepct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jcsample.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jctrans.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jdapimin.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jdapistd.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jdatasrc.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jdcoefct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jdcolor.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jdct.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jddctmgr.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jdhuff.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jdhuff.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jdinput.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jdmainct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jdmarker.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jdmaster.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jdmerge.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jdphuff.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jdpostct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jdsample.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jdtrans.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jerror.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jerror.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctflt.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctfst.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctint.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jidctflt.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jidctfst.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jidctint.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jidctred.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jinclude.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jmemmgr.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jmemnobs.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jmemsys.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jmorecfg.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jpegint.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jpeglib.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jquant1.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jquant2.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jutils.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/jversion.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/transupp.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/jpglib/transupp.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/pnglib/libpng_readme.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/pnglib/png.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/pnglib/png.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/pnglib/pngconf.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/pnglib/pngerror.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/pnglib/pngget.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/pnglib/pnginfo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/pnglib/pngmem.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/pnglib/pngpread.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/pnglib/pngpriv.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/pnglib/pngread.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/pnglib/pngrio.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/pnglib/pngrtran.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/pnglib/pngrutil.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/pnglib/pngset.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/pnglib/pngstruct.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/pnglib/pngtrans.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/pnglib/pngwio.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/pnglib/pngwrite.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/pnglib/pngwtran.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/pnglib/pngwutil.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/juce_GIFLoader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/juce_JPEGLoader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/image_formats/juce_PNGLoader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/images/juce_Image.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/images/juce_Image.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/images/juce_ImageCache.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/images/juce_ImageCache.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/images/juce_ImageConvolutionKernel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/images/juce_ImageConvolutionKernel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/images/juce_ImageFileFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/images/juce_ImageFileFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/native/juce_android_Fonts.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/native/juce_android_GraphicsContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/native/juce_android_IconHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/native/juce_freetype_Fonts.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/native/juce_linux_Fonts.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/native/juce_linux_IconHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsContext.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/native/juce_mac_Fonts.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/native/juce_mac_IconHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/native/juce_RenderingHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/native/juce_win32_Direct2DGraphicsContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/native/juce_win32_Direct2DGraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/native/juce_win32_DirectWriteTypeface.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/native/juce_win32_DirectWriteTypeLayout.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/native/juce_win32_Fonts.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/native/juce_win32_IconHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/placement/juce_Justification.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/placement/juce_RectanglePlacement.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/placement/juce_RectanglePlacement.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/juce_graphics.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/juce_graphics.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_graphics/juce_graphics.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/application/juce_Application.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/application/juce_Application.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/buttons/juce_ArrowButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/buttons/juce_ArrowButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/buttons/juce_Button.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/buttons/juce_Button.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/buttons/juce_DrawableButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/buttons/juce_DrawableButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/buttons/juce_HyperlinkButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/buttons/juce_HyperlinkButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/buttons/juce_ImageButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/buttons/juce_ImageButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/buttons/juce_ShapeButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/buttons/juce_ShapeButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/buttons/juce_TextButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/buttons/juce_TextButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/buttons/juce_ToggleButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/buttons/juce_ToggleButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/buttons/juce_ToolbarButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/buttons/juce_ToolbarButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandID.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandInfo.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandInfo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandTarget.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/commands/juce_KeyPressMappingSet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/commands/juce_KeyPressMappingSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/components/juce_CachedComponentImage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/components/juce_Component.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/components/juce_Component.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/components/juce_ComponentListener.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/components/juce_ComponentListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/components/juce_ModalComponentManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/components/juce_ModalComponentManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/desktop/juce_Desktop.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/desktop/juce_Desktop.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/desktop/juce_Displays.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/desktop/juce_Displays.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/drawables/juce_Drawable.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/drawables/juce_Drawable.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/drawables/juce_DrawableComposite.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/drawables/juce_DrawableComposite.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/drawables/juce_DrawableImage.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/drawables/juce_DrawableImage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/drawables/juce_DrawablePath.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/drawables/juce_DrawablePath.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/drawables/juce_DrawableRectangle.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/drawables/juce_DrawableRectangle.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/drawables/juce_DrawableShape.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/drawables/juce_DrawableShape.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/drawables/juce_DrawableText.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/drawables/juce_DrawableText.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/drawables/juce_SVGParser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/filebrowser/juce_ContentSharer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/filebrowser/juce_ContentSharer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsDisplayComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsDisplayComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsList.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooserDialogBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooserDialogBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/filebrowser/juce_FileListComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/filebrowser/juce_FileListComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/filebrowser/juce_FilenameComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/filebrowser/juce_FilenameComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/filebrowser/juce_FilePreviewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/filebrowser/juce_FileSearchPathListComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/filebrowser/juce_FileSearchPathListComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/filebrowser/juce_FileTreeComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/filebrowser/juce_FileTreeComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/filebrowser/juce_ImagePreviewComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/filebrowser/juce_ImagePreviewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/keyboard/juce_CaretComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/keyboard/juce_CaretComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/keyboard/juce_KeyboardFocusTraverser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/keyboard/juce_KeyboardFocusTraverser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/keyboard/juce_KeyListener.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/keyboard/juce_KeyListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/keyboard/juce_KeyPress.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/keyboard/juce_KeyPress.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/keyboard/juce_ModifierKeys.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/keyboard/juce_ModifierKeys.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/keyboard/juce_SystemClipboard.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/keyboard/juce_TextEditorKeyMapper.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/keyboard/juce_TextInputTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_AnimatedPosition.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_AnimatedPositionBehaviours.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_ComponentAnimator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_ComponentAnimator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_ComponentBoundsConstrainer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_ComponentBoundsConstrainer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_ComponentBuilder.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_ComponentBuilder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_ComponentMovementWatcher.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_ComponentMovementWatcher.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_ConcertinaPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_ConcertinaPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_FlexBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_FlexBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_FlexItem.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_Grid.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_Grid.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_GridItem.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_GridItem.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_GridUnitTests.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_GroupComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_GroupComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_MultiDocumentPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_MultiDocumentPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_ResizableBorderComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_ResizableBorderComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_ResizableCornerComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_ResizableCornerComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_ResizableEdgeComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_ResizableEdgeComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_ScrollBar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_ScrollBar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_SidePanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_SidePanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutResizerBar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutResizerBar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_StretchableObjectResizer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_StretchableObjectResizer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_TabbedButtonBar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_TabbedButtonBar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_TabbedComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_TabbedComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_Viewport.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/layout/juce_Viewport.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V1.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V1.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V2.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V2.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V3.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V3.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V4.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V4.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/menus/juce_BurgerMenuComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/menus/juce_BurgerMenuComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/menus/juce_MenuBarComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/menus/juce_MenuBarComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/menus/juce_MenuBarModel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/menus/juce_MenuBarModel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/menus/juce_PopupMenu.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/menus/juce_PopupMenu.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/misc/juce_BubbleComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/misc/juce_BubbleComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/misc/juce_DropShadower.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/misc/juce_DropShadower.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/misc/juce_JUCESplashScreen.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/misc/juce_JUCESplashScreen.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/mouse/juce_ComponentDragger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/mouse/juce_ComponentDragger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropContainer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropContainer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/mouse/juce_FileDragAndDropTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/mouse/juce_LassoComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/mouse/juce_MouseCursor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/mouse/juce_MouseCursor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/mouse/juce_MouseEvent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/mouse/juce_MouseEvent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/mouse/juce_MouseInactivityDetector.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/mouse/juce_MouseInactivityDetector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/mouse/juce_MouseInputSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/mouse/juce_MouseInputSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/mouse/juce_MouseListener.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/mouse/juce_MouseListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/mouse/juce_SelectedItemSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/mouse/juce_TextDragAndDropTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/mouse/juce_TooltipClient.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/native/juce_android_ContentSharer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/native/juce_android_FileChooser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/native/juce_android_Windowing.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/native/juce_common_MimeTypes.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/native/juce_ios_ContentSharer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/native/juce_ios_FileChooser.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/native/juce_ios_UIViewComponentPeer.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/native/juce_ios_Windowing.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/native/juce_linux_FileChooser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/native/juce_linux_X11.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/native/juce_linux_X11.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/native/juce_linux_X11_Clipboard.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/native/juce_linux_X11_Windowing.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/native/juce_mac_FileChooser.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/native/juce_mac_MainMenu.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/native/juce_mac_MouseCursor.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/native/juce_mac_NSViewComponentPeer.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/native/juce_mac_Windowing.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/native/juce_MultiTouchMapper.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/native/juce_win32_DragAndDrop.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/native/juce_win32_FileChooser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/native/juce_win32_Windowing.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/positioning/juce_MarkerList.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/positioning/juce_MarkerList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinate.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinatePositioner.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinatePositioner.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/positioning/juce_RelativeParallelogram.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/positioning/juce_RelativeParallelogram.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/positioning/juce_RelativePoint.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/positioning/juce_RelativePoint.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/positioning/juce_RelativePointPath.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/positioning/juce_RelativePointPath.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/positioning/juce_RelativeRectangle.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/positioning/juce_RelativeRectangle.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/properties/juce_BooleanPropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/properties/juce_BooleanPropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/properties/juce_ButtonPropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/properties/juce_ButtonPropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/properties/juce_ChoicePropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/properties/juce_ChoicePropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/properties/juce_MultiChoicePropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/properties/juce_MultiChoicePropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/properties/juce_PropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/properties/juce_PropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/properties/juce_PropertyPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/properties/juce_PropertyPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/properties/juce_SliderPropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/properties/juce_SliderPropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/properties/juce_TextPropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/properties/juce_TextPropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/widgets/juce_ComboBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/widgets/juce_ComboBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/widgets/juce_ImageComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/widgets/juce_ImageComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/widgets/juce_Label.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/widgets/juce_Label.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/widgets/juce_ListBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/widgets/juce_ListBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/widgets/juce_ProgressBar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/widgets/juce_ProgressBar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/widgets/juce_Slider.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/widgets/juce_Slider.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/widgets/juce_TableHeaderComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/widgets/juce_TableHeaderComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/widgets/juce_TableListBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/widgets/juce_TableListBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/widgets/juce_TextEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/widgets/juce_TextEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/widgets/juce_Toolbar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/widgets/juce_Toolbar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemFactory.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemPalette.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemPalette.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/widgets/juce_TreeView.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/widgets/juce_TreeView.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/windows/juce_AlertWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/windows/juce_AlertWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/windows/juce_CallOutBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/windows/juce_CallOutBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/windows/juce_ComponentPeer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/windows/juce_ComponentPeer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/windows/juce_DialogWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/windows/juce_DialogWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/windows/juce_DocumentWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/windows/juce_DocumentWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/windows/juce_NativeMessageBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/windows/juce_ResizableWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/windows/juce_ResizableWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/windows/juce_ThreadWithProgressWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/windows/juce_ThreadWithProgressWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/windows/juce_TooltipWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/windows/juce_TooltipWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/windows/juce_TopLevelWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/windows/juce_TopLevelWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/juce_gui_basics.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/juce_gui_basics.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_basics/juce_gui_basics.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/code_editor/juce_CodeDocument.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/code_editor/juce_CodeDocument.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/code_editor/juce_CodeEditorComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/code_editor/juce_CodeEditorComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/code_editor/juce_CodeTokeniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniserFunctions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/code_editor/juce_LuaCodeTokeniser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/code_editor/juce_LuaCodeTokeniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/code_editor/juce_XMLCodeTokeniser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/code_editor/juce_XMLCodeTokeniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/documents/juce_FileBasedDocument.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/documents/juce_FileBasedDocument.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/embedding/juce_ActiveXControlComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/embedding/juce_AndroidViewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/embedding/juce_NSViewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/embedding/juce_ScopedDPIAwarenessDisabler.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/embedding/juce_UIViewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/embedding/juce_XEmbedComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/misc/juce_AnimatedAppComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/misc/juce_AnimatedAppComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/misc/juce_AppleRemote.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/misc/juce_BubbleMessageComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/misc/juce_BubbleMessageComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/misc/juce_ColourSelector.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/misc/juce_ColourSelector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/misc/juce_KeyMappingEditorComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/misc/juce_KeyMappingEditorComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/misc/juce_LiveConstantEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/misc/juce_LiveConstantEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/misc/juce_PreferencesPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/misc/juce_PreferencesPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/misc/juce_PushNotifications.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/misc/juce_PushNotifications.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/misc/juce_RecentlyOpenedFilesList.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/misc/juce_RecentlyOpenedFilesList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/misc/juce_SplashScreen.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/misc/juce_SplashScreen.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/misc/juce_SystemTrayIconComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/misc/juce_SystemTrayIconComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/misc/juce_WebBrowserComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/native/juce_android_PushNotifications.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/native/juce_android_WebBrowserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/native/juce_AndroidViewComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/native/juce_ios_PushNotifications.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/native/juce_ios_UIViewComponent.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/native/juce_linux_X11_SystemTrayIcon.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/native/juce_linux_X11_WebBrowserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/native/juce_linux_XEmbedComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/native/juce_mac_AppleRemote.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/native/juce_mac_CarbonViewWrapperComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/native/juce_mac_NSViewComponent.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/native/juce_mac_PushNotifications.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/native/juce_mac_SystemTrayIcon.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/native/juce_mac_WebBrowserComponent.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/native/juce_win32_ActiveXComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/native/juce_win32_SystemTrayIcon.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/native/juce_win32_WebBrowserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/juce_gui_extra.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/juce_gui_extra.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_gui_extra/juce_gui_extra.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_opengl/geometry/juce_Draggable3DOrientation.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_opengl/geometry/juce_Matrix3D.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_opengl/geometry/juce_Quaternion.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_opengl/geometry/juce_Vector3D.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_opengl/native/juce_MissingGLDefinitions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_opengl/native/juce_OpenGL_android.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_opengl/native/juce_OpenGL_ios.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_opengl/native/juce_OpenGL_linux_X11.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_opengl/native/juce_OpenGL_osx.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_opengl/native/juce_OpenGL_win32.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_opengl/native/juce_OpenGLExtensions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_opengl/opengl/juce_OpenGLContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_opengl/opengl/juce_OpenGLContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_opengl/opengl/juce_OpenGLFrameBuffer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_opengl/opengl/juce_OpenGLFrameBuffer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_opengl/opengl/juce_OpenGLGraphicsContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_opengl/opengl/juce_OpenGLGraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_opengl/opengl/juce_OpenGLHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_opengl/opengl/juce_OpenGLHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_opengl/opengl/juce_OpenGLImage.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_opengl/opengl/juce_OpenGLImage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_opengl/opengl/juce_OpenGLPixelFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_opengl/opengl/juce_OpenGLPixelFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_opengl/opengl/juce_OpenGLRenderer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_opengl/opengl/juce_OpenGLShaderProgram.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_opengl/opengl/juce_OpenGLShaderProgram.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_opengl/opengl/juce_OpenGLTexture.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_opengl/opengl/juce_OpenGLTexture.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_opengl/utils/juce_OpenGLAppComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_opengl/utils/juce_OpenGLAppComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_opengl/juce_opengl.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_opengl/juce_opengl.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../newJUCE/JUCE/modules/juce_opengl/juce_opengl.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../JuceLibraryCode/AppConfig.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../JuceLibraryCode/JuceHeader.h" PROPERTIES HEADER_FILE_ONLY TRUE)

find_library(log "log")
find_library(android "android")
find_library(glesv2 "GLESv2")
find_library(egl "EGL")

target_link_libraries( ${BINARY_NAME}

    ${log}
    ${android}
    ${glesv2}
    ${egl}
    "cpufeatures"
)

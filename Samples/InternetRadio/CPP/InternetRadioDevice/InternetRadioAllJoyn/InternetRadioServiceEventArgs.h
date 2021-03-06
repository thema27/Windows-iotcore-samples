//-----------------------------------------------------------------------------
// <auto-generated> 
//   This code was generated by a tool. 
// 
//   Changes to this file may cause incorrect behavior and will be lost if  
//   the code is regenerated.
//
//   Tool: AllJoynCodeGenerator.exe
//
//   This tool is located in the Windows 10 SDK and the Windows 10 AllJoyn 
//   Visual Studio Extension in the Visual Studio Gallery.  
//
//   The generated code should be packaged in a Windows 10 C++/CX Runtime  
//   Component which can be consumed in any UWP-supported language using 
//   APIs that are available in Windows.Devices.AllJoyn.
//
//   Using AllJoynCodeGenerator - Invoke the following command with a valid 
//   Introspection XML file and a writable output directory:
//     AllJoynCodeGenerator -i <INPUT XML FILE> -o <OUTPUT DIRECTORY>
// </auto-generated>
//-----------------------------------------------------------------------------
#pragma once

namespace com { namespace microsoft { namespace maker { namespace InternetRadio {

// Methods
public ref class InternetRadioAddPresetCalledEventArgs sealed
{
public:
    InternetRadioAddPresetCalledEventArgs(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info, _In_ Platform::String^ interfaceMemberPresetName, _In_ Platform::String^ interfaceMemberPresetAddress);

    property Windows::Devices::AllJoyn::AllJoynMessageInfo^ MessageInfo
    {
        Windows::Devices::AllJoyn::AllJoynMessageInfo^ get() { return m_messageInfo; }
    }

    property InternetRadioAddPresetResult^ Result
    {
        InternetRadioAddPresetResult^ get() { return m_result; }
        void set(_In_ InternetRadioAddPresetResult^ value) { m_result = value; }
    }

    property Platform::String^ PresetName
    {
        Platform::String^ get() { return m_interfaceMemberPresetName; }
    }

    property Platform::String^ PresetAddress
    {
        Platform::String^ get() { return m_interfaceMemberPresetAddress; }
    }

    Windows::Foundation::Deferral^ GetDeferral();

    static Windows::Foundation::IAsyncOperation<InternetRadioAddPresetResult^>^ GetResultAsync(InternetRadioAddPresetCalledEventArgs^ args)
    {
        args->InvokeAllFinished();
        auto t = concurrency::create_task(args->m_tce);
        return concurrency::create_async([t]() -> concurrency::task<InternetRadioAddPresetResult^>
        {
            return t;
        });
    }
    
private:
    void Complete();
    void InvokeAllFinished();
    void InvokeCompleteHandler();

    bool m_raised;
    int m_completionsRequired;
    concurrency::task_completion_event<InternetRadioAddPresetResult^> m_tce;
    std::mutex m_lock;
    Windows::Devices::AllJoyn::AllJoynMessageInfo^ m_messageInfo;
    InternetRadioAddPresetResult^ m_result;
    Platform::String^ m_interfaceMemberPresetName;
    Platform::String^ m_interfaceMemberPresetAddress;
};

public ref class InternetRadioNextPresetCalledEventArgs sealed
{
public:
    InternetRadioNextPresetCalledEventArgs(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

    property Windows::Devices::AllJoyn::AllJoynMessageInfo^ MessageInfo
    {
        Windows::Devices::AllJoyn::AllJoynMessageInfo^ get() { return m_messageInfo; }
    }

    property InternetRadioNextPresetResult^ Result
    {
        InternetRadioNextPresetResult^ get() { return m_result; }
        void set(_In_ InternetRadioNextPresetResult^ value) { m_result = value; }
    }

    Windows::Foundation::Deferral^ GetDeferral();

    static Windows::Foundation::IAsyncOperation<InternetRadioNextPresetResult^>^ GetResultAsync(InternetRadioNextPresetCalledEventArgs^ args)
    {
        args->InvokeAllFinished();
        auto t = concurrency::create_task(args->m_tce);
        return concurrency::create_async([t]() -> concurrency::task<InternetRadioNextPresetResult^>
        {
            return t;
        });
    }
    
private:
    void Complete();
    void InvokeAllFinished();
    void InvokeCompleteHandler();

    bool m_raised;
    int m_completionsRequired;
    concurrency::task_completion_event<InternetRadioNextPresetResult^> m_tce;
    std::mutex m_lock;
    Windows::Devices::AllJoyn::AllJoynMessageInfo^ m_messageInfo;
    InternetRadioNextPresetResult^ m_result;
};

public ref class InternetRadioPlayPresetCalledEventArgs sealed
{
public:
    InternetRadioPlayPresetCalledEventArgs(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info, _In_ Platform::String^ interfaceMemberPresetName);

    property Windows::Devices::AllJoyn::AllJoynMessageInfo^ MessageInfo
    {
        Windows::Devices::AllJoyn::AllJoynMessageInfo^ get() { return m_messageInfo; }
    }

    property InternetRadioPlayPresetResult^ Result
    {
        InternetRadioPlayPresetResult^ get() { return m_result; }
        void set(_In_ InternetRadioPlayPresetResult^ value) { m_result = value; }
    }

    property Platform::String^ PresetName
    {
        Platform::String^ get() { return m_interfaceMemberPresetName; }
    }

    Windows::Foundation::Deferral^ GetDeferral();

    static Windows::Foundation::IAsyncOperation<InternetRadioPlayPresetResult^>^ GetResultAsync(InternetRadioPlayPresetCalledEventArgs^ args)
    {
        args->InvokeAllFinished();
        auto t = concurrency::create_task(args->m_tce);
        return concurrency::create_async([t]() -> concurrency::task<InternetRadioPlayPresetResult^>
        {
            return t;
        });
    }
    
private:
    void Complete();
    void InvokeAllFinished();
    void InvokeCompleteHandler();

    bool m_raised;
    int m_completionsRequired;
    concurrency::task_completion_event<InternetRadioPlayPresetResult^> m_tce;
    std::mutex m_lock;
    Windows::Devices::AllJoyn::AllJoynMessageInfo^ m_messageInfo;
    InternetRadioPlayPresetResult^ m_result;
    Platform::String^ m_interfaceMemberPresetName;
};

public ref class InternetRadioPreviousPresetCalledEventArgs sealed
{
public:
    InternetRadioPreviousPresetCalledEventArgs(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

    property Windows::Devices::AllJoyn::AllJoynMessageInfo^ MessageInfo
    {
        Windows::Devices::AllJoyn::AllJoynMessageInfo^ get() { return m_messageInfo; }
    }

    property InternetRadioPreviousPresetResult^ Result
    {
        InternetRadioPreviousPresetResult^ get() { return m_result; }
        void set(_In_ InternetRadioPreviousPresetResult^ value) { m_result = value; }
    }

    Windows::Foundation::Deferral^ GetDeferral();

    static Windows::Foundation::IAsyncOperation<InternetRadioPreviousPresetResult^>^ GetResultAsync(InternetRadioPreviousPresetCalledEventArgs^ args)
    {
        args->InvokeAllFinished();
        auto t = concurrency::create_task(args->m_tce);
        return concurrency::create_async([t]() -> concurrency::task<InternetRadioPreviousPresetResult^>
        {
            return t;
        });
    }
    
private:
    void Complete();
    void InvokeAllFinished();
    void InvokeCompleteHandler();

    bool m_raised;
    int m_completionsRequired;
    concurrency::task_completion_event<InternetRadioPreviousPresetResult^> m_tce;
    std::mutex m_lock;
    Windows::Devices::AllJoyn::AllJoynMessageInfo^ m_messageInfo;
    InternetRadioPreviousPresetResult^ m_result;
};

public ref class InternetRadioRemovePresetCalledEventArgs sealed
{
public:
    InternetRadioRemovePresetCalledEventArgs(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info, _In_ Platform::String^ interfaceMemberPresetName);

    property Windows::Devices::AllJoyn::AllJoynMessageInfo^ MessageInfo
    {
        Windows::Devices::AllJoyn::AllJoynMessageInfo^ get() { return m_messageInfo; }
    }

    property InternetRadioRemovePresetResult^ Result
    {
        InternetRadioRemovePresetResult^ get() { return m_result; }
        void set(_In_ InternetRadioRemovePresetResult^ value) { m_result = value; }
    }

    property Platform::String^ PresetName
    {
        Platform::String^ get() { return m_interfaceMemberPresetName; }
    }

    Windows::Foundation::Deferral^ GetDeferral();

    static Windows::Foundation::IAsyncOperation<InternetRadioRemovePresetResult^>^ GetResultAsync(InternetRadioRemovePresetCalledEventArgs^ args)
    {
        args->InvokeAllFinished();
        auto t = concurrency::create_task(args->m_tce);
        return concurrency::create_async([t]() -> concurrency::task<InternetRadioRemovePresetResult^>
        {
            return t;
        });
    }
    
private:
    void Complete();
    void InvokeAllFinished();
    void InvokeCompleteHandler();

    bool m_raised;
    int m_completionsRequired;
    concurrency::task_completion_event<InternetRadioRemovePresetResult^> m_tce;
    std::mutex m_lock;
    Windows::Devices::AllJoyn::AllJoynMessageInfo^ m_messageInfo;
    InternetRadioRemovePresetResult^ m_result;
    Platform::String^ m_interfaceMemberPresetName;
};

// Readable Properties
public ref class InternetRadioGetCurrentlyPlayingRequestedEventArgs sealed
{
public:
    InternetRadioGetCurrentlyPlayingRequestedEventArgs(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

    property Windows::Devices::AllJoyn::AllJoynMessageInfo^ MessageInfo
    {
        Windows::Devices::AllJoyn::AllJoynMessageInfo^ get() { return m_messageInfo; }
    }

    property InternetRadioGetCurrentlyPlayingResult^ Result
    {
        InternetRadioGetCurrentlyPlayingResult^ get() { return m_result; }
        void set(_In_ InternetRadioGetCurrentlyPlayingResult^ value) { m_result = value; }
    }

    Windows::Foundation::Deferral^ GetDeferral();

    static Windows::Foundation::IAsyncOperation<InternetRadioGetCurrentlyPlayingResult^>^ GetResultAsync(InternetRadioGetCurrentlyPlayingRequestedEventArgs^ args)
    {
        args->InvokeAllFinished();
        auto t = concurrency::create_task(args->m_tce);
        return concurrency::create_async([t]() -> concurrency::task<InternetRadioGetCurrentlyPlayingResult^>
        {
            return t;
        });
    }

private:
    void Complete();
    void InvokeAllFinished();
    void InvokeCompleteHandler();

    bool m_raised;
    int m_completionsRequired;
    concurrency::task_completion_event<InternetRadioGetCurrentlyPlayingResult^> m_tce;
    std::mutex m_lock;
    Windows::Devices::AllJoyn::AllJoynMessageInfo^ m_messageInfo;
    InternetRadioGetCurrentlyPlayingResult^ m_result;
};

public ref class InternetRadioGetPowerRequestedEventArgs sealed
{
public:
    InternetRadioGetPowerRequestedEventArgs(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

    property Windows::Devices::AllJoyn::AllJoynMessageInfo^ MessageInfo
    {
        Windows::Devices::AllJoyn::AllJoynMessageInfo^ get() { return m_messageInfo; }
    }

    property InternetRadioGetPowerResult^ Result
    {
        InternetRadioGetPowerResult^ get() { return m_result; }
        void set(_In_ InternetRadioGetPowerResult^ value) { m_result = value; }
    }

    Windows::Foundation::Deferral^ GetDeferral();

    static Windows::Foundation::IAsyncOperation<InternetRadioGetPowerResult^>^ GetResultAsync(InternetRadioGetPowerRequestedEventArgs^ args)
    {
        args->InvokeAllFinished();
        auto t = concurrency::create_task(args->m_tce);
        return concurrency::create_async([t]() -> concurrency::task<InternetRadioGetPowerResult^>
        {
            return t;
        });
    }

private:
    void Complete();
    void InvokeAllFinished();
    void InvokeCompleteHandler();

    bool m_raised;
    int m_completionsRequired;
    concurrency::task_completion_event<InternetRadioGetPowerResult^> m_tce;
    std::mutex m_lock;
    Windows::Devices::AllJoyn::AllJoynMessageInfo^ m_messageInfo;
    InternetRadioGetPowerResult^ m_result;
};

public ref class InternetRadioGetPresetsRequestedEventArgs sealed
{
public:
    InternetRadioGetPresetsRequestedEventArgs(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

    property Windows::Devices::AllJoyn::AllJoynMessageInfo^ MessageInfo
    {
        Windows::Devices::AllJoyn::AllJoynMessageInfo^ get() { return m_messageInfo; }
    }

    property InternetRadioGetPresetsResult^ Result
    {
        InternetRadioGetPresetsResult^ get() { return m_result; }
        void set(_In_ InternetRadioGetPresetsResult^ value) { m_result = value; }
    }

    Windows::Foundation::Deferral^ GetDeferral();

    static Windows::Foundation::IAsyncOperation<InternetRadioGetPresetsResult^>^ GetResultAsync(InternetRadioGetPresetsRequestedEventArgs^ args)
    {
        args->InvokeAllFinished();
        auto t = concurrency::create_task(args->m_tce);
        return concurrency::create_async([t]() -> concurrency::task<InternetRadioGetPresetsResult^>
        {
            return t;
        });
    }

private:
    void Complete();
    void InvokeAllFinished();
    void InvokeCompleteHandler();

    bool m_raised;
    int m_completionsRequired;
    concurrency::task_completion_event<InternetRadioGetPresetsResult^> m_tce;
    std::mutex m_lock;
    Windows::Devices::AllJoyn::AllJoynMessageInfo^ m_messageInfo;
    InternetRadioGetPresetsResult^ m_result;
};

public ref class InternetRadioGetVersionRequestedEventArgs sealed
{
public:
    InternetRadioGetVersionRequestedEventArgs(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

    property Windows::Devices::AllJoyn::AllJoynMessageInfo^ MessageInfo
    {
        Windows::Devices::AllJoyn::AllJoynMessageInfo^ get() { return m_messageInfo; }
    }

    property InternetRadioGetVersionResult^ Result
    {
        InternetRadioGetVersionResult^ get() { return m_result; }
        void set(_In_ InternetRadioGetVersionResult^ value) { m_result = value; }
    }

    Windows::Foundation::Deferral^ GetDeferral();

    static Windows::Foundation::IAsyncOperation<InternetRadioGetVersionResult^>^ GetResultAsync(InternetRadioGetVersionRequestedEventArgs^ args)
    {
        args->InvokeAllFinished();
        auto t = concurrency::create_task(args->m_tce);
        return concurrency::create_async([t]() -> concurrency::task<InternetRadioGetVersionResult^>
        {
            return t;
        });
    }

private:
    void Complete();
    void InvokeAllFinished();
    void InvokeCompleteHandler();

    bool m_raised;
    int m_completionsRequired;
    concurrency::task_completion_event<InternetRadioGetVersionResult^> m_tce;
    std::mutex m_lock;
    Windows::Devices::AllJoyn::AllJoynMessageInfo^ m_messageInfo;
    InternetRadioGetVersionResult^ m_result;
};

public ref class InternetRadioGetVolumeRequestedEventArgs sealed
{
public:
    InternetRadioGetVolumeRequestedEventArgs(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

    property Windows::Devices::AllJoyn::AllJoynMessageInfo^ MessageInfo
    {
        Windows::Devices::AllJoyn::AllJoynMessageInfo^ get() { return m_messageInfo; }
    }

    property InternetRadioGetVolumeResult^ Result
    {
        InternetRadioGetVolumeResult^ get() { return m_result; }
        void set(_In_ InternetRadioGetVolumeResult^ value) { m_result = value; }
    }

    Windows::Foundation::Deferral^ GetDeferral();

    static Windows::Foundation::IAsyncOperation<InternetRadioGetVolumeResult^>^ GetResultAsync(InternetRadioGetVolumeRequestedEventArgs^ args)
    {
        args->InvokeAllFinished();
        auto t = concurrency::create_task(args->m_tce);
        return concurrency::create_async([t]() -> concurrency::task<InternetRadioGetVolumeResult^>
        {
            return t;
        });
    }

private:
    void Complete();
    void InvokeAllFinished();
    void InvokeCompleteHandler();

    bool m_raised;
    int m_completionsRequired;
    concurrency::task_completion_event<InternetRadioGetVolumeResult^> m_tce;
    std::mutex m_lock;
    Windows::Devices::AllJoyn::AllJoynMessageInfo^ m_messageInfo;
    InternetRadioGetVolumeResult^ m_result;
};

// Writable Properties
public ref class InternetRadioSetPowerRequestedEventArgs sealed
{
public:
    InternetRadioSetPowerRequestedEventArgs(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info, _In_ bool value);

    property Windows::Devices::AllJoyn::AllJoynMessageInfo^ MessageInfo
    {
        Windows::Devices::AllJoyn::AllJoynMessageInfo^ get() { return m_messageInfo; }
    }

    property bool Value
    {
        bool get() { return m_value; }
    }

    property InternetRadioSetPowerResult^ Result
    {
        InternetRadioSetPowerResult^ get() { return m_result; }
        void set(_In_ InternetRadioSetPowerResult^ value) { m_result = value; }
    }

    static Windows::Foundation::IAsyncOperation<InternetRadioSetPowerResult^>^ GetResultAsync(InternetRadioSetPowerRequestedEventArgs^ args)
    {
        args->InvokeAllFinished();
        auto t = concurrency::create_task(args->m_tce);
        return concurrency::create_async([t]() -> concurrency::task<InternetRadioSetPowerResult^>
        {
            return t;
        });
    }

    Windows::Foundation::Deferral^ GetDeferral();

private:
    void Complete();
    void InvokeAllFinished();
    void InvokeCompleteHandler();

    bool m_raised;
    int m_completionsRequired;
    concurrency::task_completion_event<InternetRadioSetPowerResult^> m_tce;
    std::mutex m_lock;
    Windows::Devices::AllJoyn::AllJoynMessageInfo^ m_messageInfo;
    bool m_value;
    InternetRadioSetPowerResult^ m_result;
};

public ref class InternetRadioSetVolumeRequestedEventArgs sealed
{
public:
    InternetRadioSetVolumeRequestedEventArgs(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info, _In_ double value);

    property Windows::Devices::AllJoyn::AllJoynMessageInfo^ MessageInfo
    {
        Windows::Devices::AllJoyn::AllJoynMessageInfo^ get() { return m_messageInfo; }
    }

    property double Value
    {
        double get() { return m_value; }
    }

    property InternetRadioSetVolumeResult^ Result
    {
        InternetRadioSetVolumeResult^ get() { return m_result; }
        void set(_In_ InternetRadioSetVolumeResult^ value) { m_result = value; }
    }

    static Windows::Foundation::IAsyncOperation<InternetRadioSetVolumeResult^>^ GetResultAsync(InternetRadioSetVolumeRequestedEventArgs^ args)
    {
        args->InvokeAllFinished();
        auto t = concurrency::create_task(args->m_tce);
        return concurrency::create_async([t]() -> concurrency::task<InternetRadioSetVolumeResult^>
        {
            return t;
        });
    }

    Windows::Foundation::Deferral^ GetDeferral();

private:
    void Complete();
    void InvokeAllFinished();
    void InvokeCompleteHandler();

    bool m_raised;
    int m_completionsRequired;
    concurrency::task_completion_event<InternetRadioSetVolumeResult^> m_tce;
    std::mutex m_lock;
    Windows::Devices::AllJoyn::AllJoynMessageInfo^ m_messageInfo;
    double m_value;
    InternetRadioSetVolumeResult^ m_result;
};

} } } } 

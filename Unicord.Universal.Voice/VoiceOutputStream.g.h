// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190620.2

#pragma once
#include "winrt/Unicord.Universal.Voice.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Storage.Streams.h"
namespace winrt::Unicord::Universal::Voice::implementation
{
    template <typename D, typename... I>
    struct __declspec(empty_bases) VoiceOutputStream_base : implements<D, Unicord::Universal::Voice::VoiceOutputStream, Windows::Foundation::IClosable, Windows::Storage::Streams::IOutputStream, I...>
    {
        using base_type = VoiceOutputStream_base;
        using class_type = Unicord::Universal::Voice::VoiceOutputStream;
        using implements_type = typename VoiceOutputStream_base::implements_type;
        using implements_type::implements_type;
        
        hstring GetRuntimeClassName() const
        {
            return L"Unicord.Universal.Voice.VoiceOutputStream";
        }
    };
}
namespace winrt::Unicord::Universal::Voice::factory_implementation
{
    template <typename D, typename T, typename... I>
    struct __declspec(empty_bases) VoiceOutputStreamT : implements<D, Windows::Foundation::IActivationFactory, Unicord::Universal::Voice::IVoiceOutputStreamFactory, I...>
    {
        using instance_type = Unicord::Universal::Voice::VoiceOutputStream;

        hstring GetRuntimeClassName() const
        {
            return L"Unicord.Universal.Voice.VoiceOutputStream";
        }
        auto CreateInstance(Unicord::Universal::Voice::VoiceClient const& client)
        {
            return make<T>(client);
        }
        [[noreturn]] Windows::Foundation::IInspectable ActivateInstance() const
        {
            throw hresult_not_implemented();
        }
    };
}

#if defined(WINRT_FORCE_INCLUDE_VOICEOUTPUTSTREAM_XAML_G_H) || __has_include("VoiceOutputStream.xaml.g.h")
#include "VoiceOutputStream.xaml.g.h"
#else

namespace winrt::Unicord::Universal::Voice::implementation
{
    template <typename D, typename... I>
    using VoiceOutputStreamT = VoiceOutputStream_base<D, I...>;
}

#endif
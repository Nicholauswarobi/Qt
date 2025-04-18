#include <QtQml/qqmlprivate.h>
#include <QtCore/qdir.h>
#include <QtCore/qurl.h>
#include <QtCore/qhash.h>
#include <QtCore/qstring.h>

namespace QmlCacheGeneratedCode {
namespace _qt_qml_MediaControls_AudioControl_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _qt_qml_MediaControls_ControlImages_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _qt_qml_MediaControls_PlaybackSeekControl_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _qt_qml_MediaControls_PlaybackRateControl_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _qt_qml_MediaControls_PlaybackControl_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _qt_qml_MediaControls_CustomSlider_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _qt_qml_MediaControls_CustomButton_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _qt_qml_MediaControls_CustomRadioButton_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}

}
namespace {
struct Registry {
    Registry();
    ~Registry();
    QHash<QString, const QQmlPrivate::CachedQmlUnit*> resourcePathToCachedUnit;
    static const QQmlPrivate::CachedQmlUnit *lookupCachedUnit(const QUrl &url);
};

Q_GLOBAL_STATIC(Registry, unitRegistry)


Registry::Registry() {
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/MediaControls/AudioControl.qml"), &QmlCacheGeneratedCode::_qt_qml_MediaControls_AudioControl_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/MediaControls/ControlImages.qml"), &QmlCacheGeneratedCode::_qt_qml_MediaControls_ControlImages_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/MediaControls/PlaybackSeekControl.qml"), &QmlCacheGeneratedCode::_qt_qml_MediaControls_PlaybackSeekControl_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/MediaControls/PlaybackRateControl.qml"), &QmlCacheGeneratedCode::_qt_qml_MediaControls_PlaybackRateControl_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/MediaControls/PlaybackControl.qml"), &QmlCacheGeneratedCode::_qt_qml_MediaControls_PlaybackControl_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/MediaControls/CustomSlider.qml"), &QmlCacheGeneratedCode::_qt_qml_MediaControls_CustomSlider_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/MediaControls/CustomButton.qml"), &QmlCacheGeneratedCode::_qt_qml_MediaControls_CustomButton_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/MediaControls/CustomRadioButton.qml"), &QmlCacheGeneratedCode::_qt_qml_MediaControls_CustomRadioButton_qml::unit);
    QQmlPrivate::RegisterQmlUnitCacheHook registration;
    registration.structVersion = 0;
    registration.lookupCachedQmlUnit = &lookupCachedUnit;
    QQmlPrivate::qmlregister(QQmlPrivate::QmlUnitCacheHookRegistration, &registration);
}

Registry::~Registry() {
    QQmlPrivate::qmlunregister(QQmlPrivate::QmlUnitCacheHookRegistration, quintptr(&lookupCachedUnit));
}

const QQmlPrivate::CachedQmlUnit *Registry::lookupCachedUnit(const QUrl &url) {
    if (url.scheme() != QLatin1String("qrc"))
        return nullptr;
    QString resourcePath = QDir::cleanPath(url.path());
    if (resourcePath.isEmpty())
        return nullptr;
    if (!resourcePath.startsWith(QLatin1Char('/')))
        resourcePath.prepend(QLatin1Char('/'));
    return unitRegistry()->resourcePathToCachedUnit.value(resourcePath, nullptr);
}
}
int QT_MANGLE_NAMESPACE(qInitResources_qmlcache_MediaControls)() {
    ::unitRegistry();
    return 1;
}
Q_CONSTRUCTOR_FUNCTION(QT_MANGLE_NAMESPACE(qInitResources_qmlcache_MediaControls))
int QT_MANGLE_NAMESPACE(qCleanupResources_qmlcache_MediaControls)() {
    return 1;
}

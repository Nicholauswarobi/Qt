include("C:/Qt/Examples/Qt-6.9.0/demos/mediaplayer/build/Desktop_Qt_6_9_0_MinGW_64_bit-Debug/.qt/QtDeploySupport.cmake")
include("${CMAKE_CURRENT_LIST_DIR}/MediaPlayerApp-plugins.cmake" OPTIONAL)
set(__QT_DEPLOY_I18N_CATALOGS "qtbase;qtdeclarative;qtdeclarative;qtdeclarative;qtdeclarative;qtdeclarative;qtdeclarative;qtdeclarative;qtdeclarative;qtdeclarative;qtmultimedia")

qt6_deploy_qml_imports(TARGET MediaPlayerApp PLUGINS_FOUND plugins_found)
qt6_deploy_runtime_dependencies(
    EXECUTABLE C:/Qt/Examples/Qt-6.9.0/demos/mediaplayer/build/Desktop_Qt_6_9_0_MinGW_64_bit-Debug/MediaPlayerApp.exe
    ADDITIONAL_MODULES ${plugins_found}
    GENERATE_QT_CONF
)
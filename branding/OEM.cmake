set(APPLICATION_NAME       "Avuz Conecta")
set(APPLICATION_SHORTNAME  "avuzconecta")
set(APPLICATION_EXECUTABLE "avuzconecta")
set(APPLICATION_DOMAIN     "conecta.avuz.app")
set(APPLICATION_VENDOR     "Avuz Conecta")
set(APPLICATION_ICON_NAME  "avuzconecta")
set(APPLICATION_VIRTUALFILE_SUFFIX "avuzconecta" CACHE STRING "Virtual file suffix (not including the .)")

set(LINUX_PACKAGE_SHORTNAME "avuzconecta")

set(THEME_CLASS            "AvuzTheme")
set(APPLICATION_REV_DOMAIN "app.avuz.conecta.desktopclient")

set(THEME_INCLUDE          "${OEM_THEME_DIR}/avuztheme.h")
set(THEME_SRC              "${OEM_THEME_DIR}/avuztheme.cpp")

# Installer assets
set(WIN_SETUP_BITMAP_PATH  "${OEM_THEME_DIR}/win" CACHE STRING "Windows installer bitmap path")
set(MAC_INSTALLER_BACKGROUND_FILE "${OEM_THEME_DIR}/osx/installer-background.png" CACHE STRING "macOS installer background image")

# Disable auto-update (no update server configured)
option(WITH_CRASHREPORTER "Build crashreporter" OFF)

project('meson_build_testing', 'c')

py_mod = import('python')
py = py_mod.find_installation()

includes = include_directories(['meson_build_testing/src'])
srcs = ['meson_build_testing/src/our_first_project.c']

py.install_sources(['meson_build_testing/__init__.py'], subdir: 'meson_build_testing', pure: false)

py.extension_module(
  '_our_first_project',
  srcs,
  install: true,
  subdir: 'meson_build_testing',
  include_directories: includes
)

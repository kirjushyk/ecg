ui_sources = [
    'ecg-monitor.vala',
    'main-menu.vala',
    'main-window.vala',
    'main.vala'
]

incdir = include_directories('../parsers')

gtk = dependency('gtk+-3.0',
    required: false
)

if gtk.found()
    executable('gtk-ecg-viewer', ui_sources,
        dependencies: gtk,
        vala_args: ['--pkg', 'ecg-parser'],
        include_directories: incdir,
        link_with: parsers,
        install: true
    )
endif

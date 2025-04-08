batt_tracker_sources = [
  'main.c',
  'batt-tracker-application.c',
  'batt-tracker-window.c',
]

batt_tracker_deps = [
  dependency('gtk4'),
  dependency('libadwaita-1', version: '>= 1.4'),
]

batt_tracker_sources += gnome.compile_resources('batt-tracker-resources',
  'batt-tracker.gresource.xml',
  c_name: 'batt_tracker'
)

executable('batt-tracker', batt_tracker_sources,
  dependencies: batt_tracker_deps,
       install: true,
)

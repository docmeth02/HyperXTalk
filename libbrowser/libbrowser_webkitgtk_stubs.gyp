{
	'includes':
	[
		'../common.gypi',
	],

	'targets':
	[
		{
			'target_name': 'libwebkitgtk_stubs',
			'type': 'static_library',

			'toolsets': ['host', 'target'],

			'variables':
			{
				'silence_warnings': 1,
			},

			'target_conditions':
			[
				[
					'toolset_os != "linux"',
					{
						'type': 'none',
					},
				],
			],

			'sources':
			[
				'<(INTERMEDIATE_DIR)/src/libwebkitgtkstubs.cpp',
			],

			'actions':
			[
				{
					'action_name': 'generate_libwebkitgtk_stubs',
					'inputs':
					[
						'../util/weak_stub_maker.pl',
						'src/libbrowser_webkitgtk.stubs',
					],
					'outputs':
					[
						'<(INTERMEDIATE_DIR)/src/libwebkitgtkstubs.cpp',
					],

					'action':
					[
						'<@(perl)',
						'../util/weak_stub_maker.pl',
						'src/libbrowser_webkitgtk.stubs',
						'<@(_outputs)',
					],
				},
			],
		},
	],
}

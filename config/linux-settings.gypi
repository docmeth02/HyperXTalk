{
	'variables':
	{
		'app_bundle_suffix': '',
		'ext_bundle_suffix': '.so',
		'lib_suffix': '.so',
		'ext_suffix': '.so',
		'exe_suffix': '',
		'debug_info_suffix': '.dbg',

		'c++_std': '<!(echo ${CXX_STD:-c++11})',
	},
	
	'defines':
	[
		'HAVE___THREAD',
		'_FILE_OFFSET_BITS=64',			
	],
	
	'include_dirs':
	[
		'../thirdparty/headers/linux/include',
		'../thirdparty/libcairo/src',
		'../thirdparty/libfreetype/include',
	],
	
	# Static libraries that are to be included into dynamic libraries
	# need to be compiled with the correct compilation flags
	'target_conditions':
	[
		[
			'server_mode == 0',
			{
				'defines':
				[
					'TARGET_PLATFORM_LINUX',
					'TARGET_PLATFORM_POSIX',
					'GTKTHEME',
					'LINUX',
					'_LINUX',
					'X11',
				],
			},
			{
				'defines':
				[
					'_LINUX',
					'_SERVER',
					'_LINUX_SERVER',
				],
			},
		],
		[
			'silence_warnings == 0',
			{
				'cflags':
				[
					'-Wall',
					'-Wextra',
#					'-Wno-deprecated-register',	# Fix when we move to C++17
					'-Wno-unused-parameter',	# Just contributes build noise
					'-Werror=return-type',
					'-Werror=uninitialized',
					'-Wno-error=maybe-uninitialized',
#					'-Werror=conversion-null',
					'-Werror=empty-body',
				],

				'cflags_cc':
				[
					'-Werror=delete-non-virtual-dtor',
					'-Werror=overloaded-virtual',
				],
			},
			{
				'cflags':
				[
					'-w',						# Disable warnings
					'-fpermissive',				# Be more lax with old code
					'-Wno-return-type',
				],
				
				'cflags_c':
				[
					'-Werror=declaration-after-statement',	# Ensure compliance with C89
				],
			},
		],
	],
	
	'cflags':
	[
		'-fPIC',
		'-fstrict-aliasing',
		'-fvisibility=hidden',
		'<!@(pkg-config --cflags gtk+-3.0 gtk+-unix-print-3.0)',
	],
	
	'cflags_c':
	[
		'-std=gnu99',
		'-Wstrict-prototypes',
	],
	
	'cflags_cc':
	[
		'-std=<(c++_std)',
		'-fno-exceptions',
		'-fno-rtti',
	],
	
	'configurations':
	{
		'Debug':
		{
			'cflags':
			[
				'-O0',
				'-g3',
			],
			
			'defines':
			[
				'_DEBUG',
			],
		},
		
		'Release':
		{
			'cflags':
			[
				'-O3',
				'-g3',
			],
			
			'defines':
			[
				'_RELEASE',
				'NDEBUG',
			],
		},
		
		'Fast':
		{
			'cflags':
			[
				'-O0',
				'-g0',
			],
			
			'defines':
			[
				'_RELEASE',
				'NDEBUG',
			],
		},
	},
}

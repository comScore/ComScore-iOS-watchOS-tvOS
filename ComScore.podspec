Pod::Spec.new do |s|
  s.name             = 'ComScore'
  s.version          = '6.7.0'
  s.summary          = 'Official analytics library for iOS, watchOS and tvOS from comScore'
  s.description      = <<-DESC
  This library is used to collect analytics from iOS, watchOS and tvOS applications. The library supports apps developed in native Objective C or Swift with Apple Xcode or in other languages/tools which can include and use native Objective C libraries.
                       DESC
  s.homepage         = 'https://github.com/comscore/ComScore-iOS-watchOS-tvOS'
  s.license          = 'Custom'
  s.author           = { "comScore" => "www.comscore.com" }
  s.source           = { :git => "https://github.com/comscore/ComScore-iOS-watchOS-tvOS.git", :tag => s.version.to_s }
  s.social_media_url = 'https://twitter.com/comScore'

  s.libraries = 'c++'
  s.frameworks = 'Security'
  s.prepare_command = <<-CMD
                         touch .pod
                         rm -rf ComScore/dynamic/iOS/ComScore.framework/strip-framework.sh
                         rm -rf ComScore/dynamic/tvOS/ComScore.framework/strip-framework.sh
                         rm -rf ComScore/dynamic/watchOS/ComScore.framework/strip-framework.sh
                      CMD

  s.subspec 'Dynamic' do |ds|
      ds.ios.deployment_target = '8.0'
      ds.ios.vendored_frameworks = 'ComScore/dynamic/iOS/ComScore.framework'
      ds.ios.preserve_paths = 'ComScore/dynamic/iOS/ComScore.framework'
      ds.ios.public_header_files = 'ComScore/dynamic/iOS/ComScore.framework/Headers/*.h'
      ds.ios.source_files = 'ComScore/dynamic/iOS/ComScore.framework/Headers/*.h'
      ds.ios.frameworks = 'SystemConfiguration'
      ds.ios.resource_bundle = { 'SCORBundle' => '.pod' }
      ds.ios.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
      ds.ios.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }

      ds.tvos.deployment_target = '9.0'
      ds.tvos.vendored_frameworks = 'ComScore/dynamic/tvOS/ComScore.framework'
      ds.tvos.preserve_paths = 'ComScore/dynamic/tvOS/ComScore.framework'
      ds.tvos.public_header_files = 'ComScore/dynamic/tvOS/ComScore.framework/Headers/*.h'
      ds.tvos.source_files = 'ComScore/dynamic/tvOS/ComScore.framework/Headers/*.h'
      ds.tvos.frameworks = 'SystemConfiguration'
      ds.tvos.resource_bundle = { 'SCORBundle' => '.pod' }
      ds.tvos.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=appletvsimulator*]' => 'arm64' }
      ds.tvos.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=appletvsimulator*]' => 'arm64' }

      ds.watchos.deployment_target = '2.0'
      ds.watchos.vendored_frameworks = 'ComScore/dynamic/watchOS/ComScore.framework'
      ds.watchos.preserve_paths = 'ComScore/dynamic/watchOS/ComScore.framework'
      ds.watchos.public_header_files = 'ComScore/dynamic/watchOS/ComScore.framework/Headers/*.h'
      ds.watchos.source_files = 'ComScore/dynamic/watchOS/ComScore.framework/Headers/*.h'
      ds.watchos.resource_bundle = { 'SCORBundle' => '.pod' }
      ds.watchos.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=watchsimulator*]' => 'arm64' }
      ds.watchos.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=watchsimulator*]' => 'arm64' }
  end

  s.subspec 'Static' do |ss|
      ss.ios.deployment_target = '6.0'
      ss.ios.vendored_frameworks = 'ComScore/static/iOS/ComScore.framework'
      ss.ios.preserve_paths = 'ComScore/static/iOS/ComScore.framework'
      ss.ios.public_header_files = 'ComScore/static/iOS/ComScore.framework/Versions/A/Headers/*.h'
      ss.ios.source_files = 'ComScore/static/iOS/ComScore.framework/Versions/A/Headers/*.h'
      ss.ios.frameworks = 'SystemConfiguration'
      ss.ios.resource_bundle = { 'SCORBundle' => '.pod' }
      ss.ios.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
      ss.ios.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }

      ss.tvos.deployment_target = '9.0'
      ss.tvos.vendored_frameworks = 'ComScore/static/tvOS/ComScore.framework'
      ss.tvos.preserve_paths = 'ComScore/static/tvOS/ComScore.framework'
      ss.tvos.public_header_files = 'ComScore/static/tvOS/ComScore.framework/Versions/A/Headers/*.h'
      ss.tvos.source_files = 'ComScore/static/tvOS/ComScore.framework/Versions/A/Headers/*.h'
      ss.tvos.frameworks = 'SystemConfiguration'
      ss.tvos.resource_bundle = { 'SCORBundle' => '.pod' }
      ss.tvos.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=appletvsimulator*]' => 'arm64' }
      ss.tvos.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=appletvsimulator*]' => 'arm64' }

      ss.watchos.deployment_target = '2.0'
      ss.watchos.vendored_frameworks = 'ComScore/static/watchOS/ComScore.framework'
      ss.watchos.preserve_paths = 'ComScore/static/watchOS/ComScore.framework'
      ss.watchos.public_header_files = 'ComScore/static/watchOS/ComScore.framework/Versions/A/Headers/*.h'
      ss.watchos.source_files = 'ComScore/static/watchOS/ComScore.framework/Versions/A/Headers/*.h'
      ss.watchos.resource_bundle = { 'SCORBundle' => '.pod' }
      ss.watchos.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=watchsimulator*]' => 'arm64' }
      ss.watchos.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=watchsimulator*]' => 'arm64' }
  end

  s.default_subspec = 'Dynamic'
  s.header_dir = 'ComScore'
  s.module_name = 'ComScore'
end

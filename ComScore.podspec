Pod::Spec.new do |s|
  s.name             = 'ComScore'
  s.version          = '6.7.1'
  s.summary          = 'Official analytics library for iOS and tvOS from comScore'
  s.description      = <<-DESC
  This library is used to collect analytics from iOS and tvOS applications. The library supports apps developed in native Objective C or Swift with Apple Xcode or in other languages/tools which can include and use native Objective C libraries.
                       DESC
  s.homepage         = 'https://github.com/comscore/ComScore-iOS-watchOS-tvOS'
  s.license          = 'Custom'
  s.author           = { "comScore" => "www.comscore.com" }
  s.source           = { :git => "https://github.com/comscore/ComScore-iOS-watchOS-tvOS.git", :tag => s.version.to_s }

  s.libraries = 'c++'
  s.frameworks = 'Security'
  s.prepare_command = <<-CMD
                         touch .pod
                         rm -rf ComScore/dynamic/ComScore.xcframework/ios-arm64_armv7/ComScore.framework/strip-framework.sh
                         rm -rf ComScore/dynamic/ComScore.xcframework/ios-arm64_i386_x86_64-simulator/ComScore.framework/strip-framework.sh
                         rm -rf ComScore/dynamic/ComScore.xcframework/tvos-arm64/ComScore.framework/strip-framework.sh
                         rm -rf ComScore/dynamic/ComScore.xcframework/tvos-arm64_x86_64-simulator/ComScore.framework/strip-framework.sh
                      CMD

  s.subspec 'Dynamic' do |ds|
      ds.ios.deployment_target = '8.0'
      ds.ios.vendored_frameworks = 'ComScore/dynamic/ComScore.xcframework'
      ds.ios.preserve_paths = 'ComScore/dynamic/ComScore.xcframework'
      ds.ios.frameworks = 'SystemConfiguration'
      ds.ios.resource_bundle = { 'SCORBundle' => '.pod' }

      ds.tvos.deployment_target = '9.0'
      ds.tvos.vendored_frameworks = 'ComScore/dynamic/ComScore.xcframework'
      ds.tvos.preserve_paths = 'ComScore/dynamic/ComScore.xcframework'
      ds.tvos.frameworks = 'SystemConfiguration'
      ds.tvos.resource_bundle = { 'SCORBundle' => '.pod' }
  end

  s.subspec 'Static' do |ss|
      ss.ios.deployment_target = '9.0'
      ss.ios.vendored_frameworks = 'ComScore/static/ComScore.xcframework'
      ss.ios.preserve_paths = 'ComScore/static/ComScore.xcframework'
      ss.ios.frameworks = 'SystemConfiguration'
      ss.ios.resource_bundle = { 'SCORBundle' => '.pod' }

      ss.tvos.deployment_target = '9.0'
      ss.tvos.vendored_frameworks = 'ComScore/static/ComScore.xcframework'
      ss.tvos.preserve_paths = 'ComScore/static/ComScore.xcframework'
      ss.tvos.frameworks = 'SystemConfiguration'
      ss.tvos.resource_bundle = { 'SCORBundle' => '.pod' }
  end

  s.default_subspec = 'Dynamic'
  s.module_name = 'ComScore'
end

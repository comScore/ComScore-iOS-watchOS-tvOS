Pod::Spec.new do |s|
  s.name             = 'ComScore'
  s.module_name      = 'ComScore'
  s.version          = '6.13.0'
  s.summary          = 'Official analytics library for iOS and tvOS from Comscore'
  s.description      = <<-DESC
  This library is used to collect analytics from iOS and tvOS applications. The library supports apps developed in native Objective C or Swift with Apple Xcode or in other languages/tools which can include and use native Objective C libraries.
                       DESC
  s.homepage         = 'https://github.com/comscore/ComScore-iOS-watchOS-tvOS'
  s.license          = 'Custom'
  s.author           = { "Comscore" => "www.comscore.com" }
  s.source           = { :git => "https://github.com/comscore/ComScore-iOS-watchOS-tvOS.git", :tag => s.version.to_s }
  s.platforms        = { :ios => "11.0", :osx => "11.0", :tvos => "11.0" }
  s.libraries        = 'c++', 'z'
  s.frameworks       = 'SystemConfiguration'
  s.prepare_command  = <<-CMD
                         touch .pod
                      CMD
  s.preserve_paths   = 'ComScore/ComScore.xcframework'
  s.resource_bundle  = { 'SCORBundle' => '.pod' }
  
  s.ios.deployment_target   = '11.0'
  s.ios.vendored_frameworks = 'ComScore/ComScore.xcframework'

  s.tvos.deployment_target   = '11.0'
  s.tvos.vendored_frameworks = 'ComScore/ComScore.xcframework'
end

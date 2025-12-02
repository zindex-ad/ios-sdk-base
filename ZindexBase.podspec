#
# Be sure to run `pod lib lint CXHAdSDK-Kit.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'ZindexBase'
  s.version          = '1.0.0'
  s.summary          = 'A short description of ZindexBase.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
ZindexBase is a pre-compiled framework for iOS that provides core functionality for advertising SDK integration.
                       DESC

  s.homepage         = 'https://codeup.aliyun.com/601267a9841cc46b7c499e86/CXHAdSDK-Kit'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'csscsg' => '1621454839@qq.com' }
  s.source           = { :git => 'https://codeup.aliyun.com/601267a9841cc46b7c499e86/CXHAdSDK-Kit.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '12.0'
  
  s.swift_version = '5.0'
  

  # 二进制 framework 路径
  s.vendored_frameworks = 'XCFramework/ZindexBase.xcframework'

  # 系统框架依赖
  s.frameworks = 'UIKit', 'AdSupport', 'SystemConfiguration', 'CoreTelephony', 'CoreLocation', 'WebKit', 'AdSupport', 'CoreFoundation', 'QuartzCore', 'AssetsLibrary', 'ImageIO', 'Accelerate', 'MobileCoreServices'
  
  
  s.libraries = 'z', 'sqlite3'
  
  s.requires_arc = true
  s.static_framework = true
  
  # 二进制 framework 保留链接标志
  s.pod_target_xcconfig = {
    'OTHER_LDFLAGS' => '-ObjC'
  }
  
  # 二进制 framework 不需要额外的 xcconfig
  # s.xcconfig = {
  #   'ARCHS' => '${ARCHS_STANDARD_64_BIT}',
  #   'VALID_ARCHS' => '${ARCHS_STANDARD_64_BIT}'
  # }
  
  # s.resource_bundles = {
  #   'CXHAdSDK-Kit' => ['CXHAdSDK-Kit/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'AFNetworking', '~> 2.3'
end

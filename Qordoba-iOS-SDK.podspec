Pod::Spec.new do |s|
  s.name         	 	=  'Qordoba-iOS-SDK'
  s.version      	 	=  '1.3.12'
  s.license      	 	=  { :type => 'Apache License, Version 2.0', :text => 'See https://github.com/Qordobacode/Qordoba-iOS-SDK/blob/master/License.md' }
  s.summary      	 	=  'The Qordoba iOS SDK.'
  s.description  	 	=  'The Qordoba iOS SDK enables you to access the Qorodba localization services and APIs.'
  s.homepage     	 	=  'http://www.qordoba.com/'
  s.author       	 	=  'Konrad Rodzik @ Qordoba'
  s.social_media_url 	=  'https://twitter.com/qordoba'

  s.platform     	 	= 	:ios, '7.0'
  s.requires_arc 	 	= 	true

  s.source           	=  { :git => "https://github.com/Qordobacode/Qordoba-iOS-SDK.git", :tag => "v1.3.12" }
  s.resource     	 	=  "QordobaSDK.bundle"

  s.frameworks 	 	 	=  'AudioToolbox', 'CFNetwork', 'Foundation', 'MobileCoreServices', 'Security', 'SystemConfiguration', 'UIKit'
  s.libraries 	 	 	=  'icucore', 'z'

  s.preserve_paths      =  "QordobaSDK.framework", "scripts/*"
  s.public_header_files =  "QordobaSDK.framework/**/*.h"
  s.vendored_frameworks =  "QordobaSDK.framework"
end
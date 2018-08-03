Pod::Spec.new do |s|
s.name         = "BJEncryptSDK"
s.version      = "0.0.2"
s.summary      = "BJEncryptSDK是一个快速开发密码控件工具包"
s.description  = "BJEncryptSDK是一个开发工具包,包含了一些控件封装，工具类等，可加快开发速度。"
s.homepage     = "https://github.com/ZHVince/BJEncryptSDK"
s.license      = "MIT"
s.author             = { "zhangheng" => "940088091@qq.com" }
s.platform     = :ios
s.source       = { :git => "https://github.com/ZHVince/BJEncryptSDK.git", :tag => "#{s.version}" }
s.source_files  = "**", "**/*.{h,m}"
s.exclude_files = ""

non_arc_files = 'JSONKit.m'//这是需要添加mrc标识的文件，为相对路径

s.exclude_files = non_arc_files//在工程中首先排除一下

s.subspec 'no-arc' do |sp|//一下就是子设置，为需要添加mrc标识的文件进行设置

sp.source_files = non_arc_files

sp.requires_arc = false

end

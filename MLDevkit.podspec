Pod::Spec.new do |s|

s.name         = "MLDevkit"        #私有库的名称
s.version      = "0.0.1"     #版本号
s.summary      = "私有库demo" #简介
s.description  = <<-DESC     #描述
一个cocoapods管理私有库的样例
DESC

s.homepage     = "https://github.com/lsw891227/MLDevkit" #项目主页，不是git地址
s.license      = { :type => "MIT", :file => "README.md" }  #开源协议，填MIT即可，文件选Readme.md
s.author       = { "liushuangwei" => "932181121@qq.com" } #作者
s.platform     = :ios, "8.0" #支持的平台和版本号

s.source       = { :git => "https://github.com/lsw891227/MLDevkit.git", :tag => "0.0.1" }   #库的git地址，以及tag号，tag号一般直接用版本号

s.source_files  = 'MLDevkit/MLDevkit.framework' #库的源文件路径

s.resources = 'MLDevkit/MLDevkit.framework'  #资源文件地址，资源文件最好用bundle管理，注意xib文件也是资源文件，私有库中如果有xib，需要先编译成nib文件，再放进bundle中
s.requires_arc = true #是否需要ARC支持

#s.dependency "SDWebImage" #如果依赖其他第三方库，在这里添加，可以添加多个
#s.dependency "MyCustomLib" #也可以引用其他的私有库，但是在验证的时候要加上这个私有库的地址

end

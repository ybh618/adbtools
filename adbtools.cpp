#include<iostream>
#include<string>
#include<windows.h>
using namespace std;
int num;
string str;
void miui_optimize(){
    system("adb shell pm disable-user com.miui.systemAdSolution");//禁用智能服务 
	system("adb shell pm disable-user com.xiaomi.ab"); //禁用小米电商 
	system("adb shell pm disable-user com.miui.bugreport");//禁用用户反馈 
	system("adb shell pm disable-user com.miui.analytics");//禁用系统毒瘤 
	system("adb shell rm -f -r /sdcard/Android/data/com.miui.systemAdSolution/files");//删除开屏广告 
	system("adb shell touch /sdcard/Android/data/com.miui.systemAdSolution/files");//防止开屏广告再生 
    cout<<"优化已完成，5秒后程序自动关闭"<<endl;
    Sleep(5000);
}
void miui_update_off(){
    system("adb shell rm -f -r /sdcard/Download/downloaded_rom");//删除系统更新包 
	system("adb shell touch /sdcard/Download/downloaded_rom");//防止系统静默下载更新包 
	system("adb shell rm -f -r /sdcard/downloaded_rom");//同上 
	system("adb shell touch /sdcard/downloaded_rom");//同上 
    cout<<"系统更新已关闭，5秒后程序自动关闭"<<endl;
    Sleep(5000);
}
void miui_update_on(){
    system("adb shell rm -f -r /sdcard/Download/downloaded_rom");//删除禁用系统更新文件
	system("adb shell rm -f -r /sdcard/downloaded_rom");//同上 
    cout<<"系统更新已启用，5秒后程序自动关闭"<<endl;
    Sleep(5000);
}
void jiuzhuan(){
    system("adb shell magisk --remove-modules");
    cout<<"已卸载所有模块，5秒后程序自动关闭"<<endl;
    Sleep(5000);
}
void reboot(){
    int reboot_num;
    cout<<"1.重启到Recovery"<<endl<<"2.重启到Fastboot"<<endl<<"3.重启到高通9008深刷模式"<<endl;
    cin>>reboot_num;
    switch(reboot_num)
    {
        case 1:
            system("adb reboot recovery");
            break;
        case 2:
            system("adb reboot fastboot");
            break;
        default:
            system("adb reboot edl");
            break;
    }
    cout<<"重启成功，5秒后程序自动关闭"<<endl;
    Sleep(5000);
}
void activation(){
    int activation_num;
    cout<<"1.激活小黑屋麦克斯韦妖模式"<<endl<<"2.激活冰箱普通adb模式"<<endl<<"3.激活黑阈"<<endl<<"4.激活Shizuku"<<endl<<"5.激活小黑屋设备管理员模式"<<endl<<"6.激活冰箱设备管理员模式"<<endl<<"请先关闭应用双开，多用户，屏幕锁等功能！";
    cin>>activation_num;
    switch(activation_num)
    {
        case 1:
            system("adb shell sh /sdcard/Android/data/web1n.stopapp/files/demon.sh");
            break;
        case 2:
            system("adb shell sh /sdcard/Android/data/com.catchingnow.icebox/files/start.sh");
            break;
        case 3:
            system("adb shell sh /data/data/me.piebridge.brevent/brevent.sh");
            break;
        case 4:
            system("adb shell sh /sdcard/Android/data/moe.shizuku.privileged.api/start.sh");
            break;
        case 5:
            system("adb shell dpm set-device-owner web1n.stopapp/.receiver.AdminReceiver");
            break;
        default:
            system("adb shell dpm set-device-owner com.catchingnow.icebox/.receiver.DPMReceiver");
            break;
    }
    cout<<"激活成功，5秒后程序自动关闭"<<endl;
    Sleep(5000);
}
void install_apk(){
    string apk_;
    cout<<"请输入apk路径"<<endl;
    cin>>apk_;
    str="adb install -r "+apk_;
    system(str.c_str());
    cout<<"安装成功，5秒后程序自动关闭"<<endl;
    Sleep(5000);
}
void uninstall_apk(){
    string apk__;
    cout<<"请输入apk包名"<<endl;
    cin>>apk__;
    str="adb uninstall "+apk__;
    system(str.c_str());
    cout<<"卸载成功，5秒后程序自动关闭"<<endl;
    Sleep(5000);
}
void uninstall_apk_(){
    string apk___;
    cout<<"请输入apk包名"<<endl;
    cin>>apk___;
    str="adb uninstall -k "+apk___;
    system(str.c_str());
    cout<<"卸载成功，5秒后程序自动关闭"<<endl;
    Sleep(5000);
}
int main(){
    cout<<"****************************************************************"<<endl<<"作者B站:爱整活的小学生，使用了部分@墨尘之一（B站）的源代码，记得一键三连！"<<endl<<"1.本程序完全免费 如您是购买所得 请立即退款"<<endl<<"2.使用前，请备份好数据，以防出现问题"<<endl<<"3.使用本程序则代表您同意接受可能带来的风险,如:数据丢失、卡米等"<<endl<<"****************************************************************"<<endl<<"本程序发布前已经过测试，但不保证您使用过程中不会出现意外情况，如有BUG或意见，请联系作者反馈"<<endl<<"按下回车键进入程序"<<endl;
	getchar();
	system("cls");
    cout<<"正在检查手机状态"<<endl<<"如果手机上弹出提示，请允许。"<<endl<<"如果List of devices attached的下一行是空行即为连接失败，请查看链接中的内容bilibili.com/read/cv16541940，并在处理之后关闭并重新打开本程序进行检查"<<endl;
    system("adb devices");
    cout<<"请输入要使用的功能"<<endl<<"1.MIUI一键优化"<<endl<<"2.MIUI一键禁用系统更新()"<<endl<<"3.MIUI一键开启系统更新"<<endl<<"4.卸载magisk模块救砖"<<endl<<"5.各种重启"<<endl<<"6.激活各种DPM软件（如冰箱、小黑屋、Shiruku等）"<<endl<<"7.安装APK"<<endl<<"8.卸载应用"<<endl<<"9.保留数据卸载应用"<<endl;
    cin>>num;
    switch(num){
        case 1:
            miui_optimize();
            break;
        case 2:
            miui_update_off();
            break;
        case 3:
            miui_update_on();
            break;
        case 4:
            jiuzhuan();
            break;
        case 5:
            reboot();
            break;
        case 6:
            activation();
            break;
        case 7:
            install_apk();
            break;
        case 8:
            uninstall_apk();
        default:
            uninstall_apk_();
    }
}
//编译命令clang++ C:\Users\ybh\Downloads\c\adbtools.cpp --target=x86_64-w64-mingw -static-libgcc -Ofast
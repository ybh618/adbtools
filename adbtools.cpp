#include<iostream>
#include<string>
#include<windows.h>
using namespace std;
int num;
string str;
void miui_optimize(){
    system("adb shell pm disable-user com.miui.systemAdSolution");//�������ܷ��� 
	system("adb shell pm disable-user com.xiaomi.ab"); //����С�׵��� 
	system("adb shell pm disable-user com.miui.bugreport");//�����û����� 
	system("adb shell pm disable-user com.miui.analytics");//����ϵͳ���� 
	system("adb shell rm -f -r /sdcard/Android/data/com.miui.systemAdSolution/files");//ɾ��������� 
	system("adb shell touch /sdcard/Android/data/com.miui.systemAdSolution/files");//��ֹ����������� 
    cout<<"�Ż�����ɣ�5�������Զ��ر�"<<endl;
    Sleep(5000);
}
void miui_update_off(){
    system("adb shell rm -f -r /sdcard/Download/downloaded_rom");//ɾ��ϵͳ���°� 
	system("adb shell touch /sdcard/Download/downloaded_rom");//��ֹϵͳ��Ĭ���ظ��°� 
	system("adb shell rm -f -r /sdcard/downloaded_rom");//ͬ�� 
	system("adb shell touch /sdcard/downloaded_rom");//ͬ�� 
    cout<<"ϵͳ�����ѹرգ�5�������Զ��ر�"<<endl;
    Sleep(5000);
}
void miui_update_on(){
    system("adb shell rm -f -r /sdcard/Download/downloaded_rom");//ɾ������ϵͳ�����ļ�
	system("adb shell rm -f -r /sdcard/downloaded_rom");//ͬ�� 
    cout<<"ϵͳ���������ã�5�������Զ��ر�"<<endl;
    Sleep(5000);
}
void jiuzhuan(){
    system("adb shell magisk --remove-modules");
    cout<<"��ж������ģ�飬5�������Զ��ر�"<<endl;
    Sleep(5000);
}
void reboot(){
    int reboot_num;
    cout<<"1.������Recovery"<<endl<<"2.������Fastboot"<<endl<<"3.��������ͨ9008��ˢģʽ"<<endl;
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
    cout<<"�����ɹ���5�������Զ��ر�"<<endl;
    Sleep(5000);
}
void activation(){
    int activation_num;
    cout<<"1.����С�������˹Τ��ģʽ"<<endl<<"2.���������ͨadbģʽ"<<endl<<"3.�������"<<endl<<"4.����Shizuku"<<endl<<"5.����С�����豸����Աģʽ"<<endl<<"6.��������豸����Աģʽ"<<endl<<"���ȹر�Ӧ��˫�������û�����Ļ���ȹ��ܣ�";
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
    cout<<"����ɹ���5�������Զ��ر�"<<endl;
    Sleep(5000);
}
void install_apk(){
    string apk_;
    cout<<"������apk·��"<<endl;
    cin>>apk_;
    str="adb install -r "+apk_;
    system(str.c_str());
    cout<<"��װ�ɹ���5�������Զ��ر�"<<endl;
    Sleep(5000);
}
void uninstall_apk(){
    string apk__;
    cout<<"������apk����"<<endl;
    cin>>apk__;
    str="adb uninstall "+apk__;
    system(str.c_str());
    cout<<"ж�سɹ���5�������Զ��ر�"<<endl;
    Sleep(5000);
}
void uninstall_apk_(){
    string apk___;
    cout<<"������apk����"<<endl;
    cin>>apk___;
    str="adb uninstall -k "+apk___;
    system(str.c_str());
    cout<<"ж�سɹ���5�������Զ��ر�"<<endl;
    Sleep(5000);
}
int main(){
    cout<<"****************************************************************"<<endl<<"����Bվ:�������Сѧ����ʹ���˲���@ī��֮һ��Bվ����Դ���룬�ǵ�һ��������"<<endl<<"1.��������ȫ��� �����ǹ������� �������˿�"<<endl<<"2.ʹ��ǰ���뱸�ݺ����ݣ��Է���������"<<endl<<"3.ʹ�ñ������������ͬ����ܿ��ܴ����ķ���,��:���ݶ�ʧ�����׵�"<<endl<<"****************************************************************"<<endl<<"�����򷢲�ǰ�Ѿ������ԣ�������֤��ʹ�ù����в�������������������BUG�����������ϵ���߷���"<<endl<<"���»س����������"<<endl;
	getchar();
	system("cls");
    cout<<"���ڼ���ֻ�״̬"<<endl<<"����ֻ��ϵ�����ʾ��������"<<endl<<"���List of devices attached����һ���ǿ��м�Ϊ����ʧ�ܣ���鿴�����е�����bilibili.com/read/cv16541940�����ڴ���֮��رղ����´򿪱�������м��"<<endl;
    system("adb devices");
    cout<<"������Ҫʹ�õĹ���"<<endl<<"1.MIUIһ���Ż�"<<endl<<"2.MIUIһ������ϵͳ����()"<<endl<<"3.MIUIһ������ϵͳ����"<<endl<<"4.ж��magiskģ���ש"<<endl<<"5.��������"<<endl<<"6.�������DPM���������䡢С���ݡ�Shiruku�ȣ�"<<endl<<"7.��װAPK"<<endl<<"8.ж��Ӧ��"<<endl<<"9.��������ж��Ӧ��"<<endl;
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
//��������clang++ C:\Users\ybh\Downloads\c\adbtools.cpp --target=x86_64-w64-mingw -static-libgcc -Ofast
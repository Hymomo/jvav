//Old Version: Modified by 2006bt(https://wvbforum.xyz/u/2006bt,https://github.com/2006bt)
// Now(2023.4) The new version is at https://github.com/hymomo/Jvav
//We are free, it's open source! This version is not associated with other JVAVIDE
#include <iostream>
#include <unistd.h>
using namespace std;
int main()
{
    cout << "Getting a list of files...\n";
    usleep(1);
    cout << "Detecting file integrity...\n";
    usleep(2);
    cout << "Error! There are 15 files that go wrong! Re-downloading.\n";
    cout << "Downloading file (1/15)...\nCL.command.1.tlog\n";
    usleep(1);
    cout << "Downloading file (2/15)...\nCL.read.1.tlog\n";
    usleep(4);
    cout << "Downloading file (3/15)...\nCL.write.1.tlog\n";
    usleep(10);
    cout << "Downloading file (4/15)...\nJvav.lastbuildstate\n";
    usleep(10);
    cout << "Downloading file (5/15)...\nlink.command.1.tlog\n";
    usleep(2);
    cout << "Downloading file (6/15)...\nlink.read.1.tlog\n";
    usleep(2);
    cout << "Downloading file (7/15)...\nlink.write.1.tlog\n";
    usleep(1);
    cout << "Downloading file (8/15)...\nJvav.ilk\n";
    usleep(7);
    cout << "Downloading file (9/15)...\nJvav.txt\n";
    usleep(1);
    cout << "Downloading file (10/15)...\nJvav.zip\n";
    usleep(5);
    cout << "Downloading file (11/15)...\nJvav.pdb\n";
    usleep(6);
    cout << "Downloading file (12/15)...\nvc142.idb\n";
    usleep(1);
    cout << "Downloading file (13/15)...\nvc142.pdb\n";
    usleep(2);
    cout << "Downloading file (14/15)...\nonline upgrades.service\n";
    usleep(15);
    cout << "Downloading file (15/15)...\nlanguage pack.pack\n";
    usleep(1);
    cout << "Verifying downloaded files...\n";
    usleep(1);
    cout << "Registered and profile...\n";
    usleep(1);
    cout << "Loading file...\n";
    usleep(5);
    system("clear");
    string command, type, inputcharacter;
    /*en_main*/
    cout << "--------------------------------------------\n";
    cout << "| Jvav Programmer             V1.u2.10086  |\n";
    cout << "| By Dr.ZhangHaoYang          Sorter 30266 |\n";
    cout << "| Change: Miaomiao159                 |\n";
    cout << "| Enter'help'to get help!                  |\n";
    cout << "| Chinese Simplified is now supported!     |\n";
    cout << "--------------------------------------------\n";
    main:
    cout << "Jvav>";
    cin >> command;
    if (command == "help") {
        cout << "----Jvav help------Page(1/1)---\n";
        cout << "  help [page]:Get help\n  leave:Exit Jvav\n  output:Output characters\n  input:Input characters\n  upgrade:Detect upgrades and updates online\n  language:setting the program language\n";
        cout << "----Jvav help------Page(1/1)---\n";
        goto main;
    }
    else if (command == "leave") {
        cout << "Are you sure to leave jvav?(y/n)";
        string L;
        cin >> L;
        if (L == "y") {
            return 0;
        }
        else {
            goto main;
        }
    }
    else if (command == "output") {
        cout << "Jvav>output>";
        cin >> type;
            cout << type << endl;
            goto main;
    }
    else if (command == "input") {
        cout << "Jvav>input>";
        cin >> inputcharacter;
        goto main;
    }
    else if (command == "upgrade") {
        cout << "Jvav>upgrade>Detecting updates online...\n";
        usleep(2);
        cout << "Jvav>upgrade>Error! The update failed! Because the version list cannot be obtained on the authentication server!\n";
        goto main;
    }
    else if (command == "language") {
        cout << "Please enter the setting language(English/简体中文):";
        string language;
        cin >> language;
        if (language == "English") {
            goto main;
        }
        else if (language == "简体中文") {
            system("clear");
            goto ch;
        }
        else {
            cout << "Unknown language.\n";
            goto main;
        }
    }
    else {
        cout << "Unknown command\n";
        goto main;
    }
    /*cn_main*/
    ch:
    cout << "--------------------------------------------\n";
    cout << "| Jvav编译器            版本号：Alpha0.1145 |\n";
    cout << "| 作者：Dr.ZhangHaoYang      整理者：30266 |\n";
    cout << "| 修改：Miaomiao159                 |\n";
    cout << "| 通过输入'帮助'来获得帮助                 |\n";
    cout << "| 现已支持简体中文！                       |\n";
    cout << "--------------------------------------------\n";
    string 命令, 类型, 输入字符串;
    cn_main:
    cout << "Jvav>";
    cin >> 命令;
    if (命令 == "帮助") {
        cout << "----Jvav帮助---第(1/1)页----\n";
        cout << "  帮助 [页码]:获取帮助\n  退出:退出Jvav\n  输出:输出字符\n  输入:输入字符以便调用\n  更新:在线检测更新并升级\n  语言:设置Jvav的语言\n";
        cout << "----Jvav帮助---第(1/1)页----\n";
        goto cn_main;
    }
    else if(命令 == "退出"){
        cout << "你确定要退出Jvav吗？(是/否)";
        string 退;
        cin >> 退;
        if (退 == "是") {
            return 0;
        }
        else {
            goto cn_main;
        }
    }
    else if (命令 == "输出") {
        cout << "Jvav>输出>";
        cin >> 类型;
        cout << 类型 << endl;
        goto cn_main;
    }
    else if (命令 == "输入") {
        cout << "Jvav>输入>";
        cin >> 输入字符串;
        goto cn_main;
    }
    else if (命令 == "更新") {
        cout << "Jvav>更新>正在准备更新...\n";
        usleep(2);
        cout << "Jvav>更新>错误！无法从认证服务器获取版本列表！\n";
        goto cn_main;
    }
    else if (命令 == "语言") {
        cout << "请输入您要切换的语言(简体中文/English):";
        string 语言;
        cin >> 语言;
        if (语言 == "简体中文") {
            goto cn_main;
        }
        else if (语言 == "English") {
            system("clear");
            goto main;
        }
        else {
            cout << "未知的语言。\n";
            goto cn_main;
        }
    }
    else {
        cout << "未知的命令！\n";
        goto cn_main;
    }
}
#include "../../include/myhead.h"

int interface_chat()
{
    system("clear");
    printf("                欢迎来到聊天室\n");
    printf("*查看在线用户(online)   *私聊(chatone)\n");
    printf("*群聊 (chatall)         *注销(quit)\n");
    printf("*修改密码(changepwd)    *修改昵称(changename)\n");
    printf("*查看聊天记录(viewmsg)  *退出聊天室(exit)\n");
    return SUCCESS;
}

#include "../../include/myhead.h"

int reg(int sfd, Msg *msg)
{
    bzero(msg, sizeof(Msg));
    
    printf("请输入用户名:\n");
    scanf("%s", msg->name);
    printf("请输入密码  :\n");
	set_disp_mode(STDIN_FILENO,0);
	getchar();
    scanf("%s",msg->password);
	set_disp_mode(STDIN_FILENO,1);
    msg->action = REG;

    write(sfd, msg, sizeof(Msg));

    bzero(msg,sizeof(Msg));
    read(sfd, msg, sizeof(Msg));
    
    if(msg->action == FAILURE)
    {
        printf("注册失败,该用户名已存在!\n");
	return FAILURE;
    }

    else if(msg->action == SUCCESS)
    {
        printf("注册成功!\n");
    }
    return SUCCESS;
}

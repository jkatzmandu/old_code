#include <stdio.h>         
#include <string.h>       
#include <sys/types.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <arpa/inet.h> 
#include <fcntl.h>    
#include <netdb.h>   

#define  PORT_NUM     514
#define  IP_ADDR      "192.168.56.1"

main() {
  int                  client_s;  
  struct sockaddr_in   server_addr;
  int                  addr_len;    
  char                 out_buf[4096];
  char                 in_buf[4096];  
  int                  retcode;        

  client_s = socket(AF_INET, SOCK_DGRAM, 0);
  if (client_s < 0)
  {
    printf("*** ERROR - socket() failed \n");
    exit(-1);
  }

  server_addr.sin_family = AF_INET;                 
  server_addr.sin_port = htons(PORT_NUM);          
  server_addr.sin_addr.s_addr = inet_addr(IP_ADDR);

  strcpy(out_buf, "<35>CEF:0|Fake Vendor|Fake Product|0.1|foo:ID|Fake Event Name|9|dst=10.0.0.1 dhost=stupid.host.com shost=attacker.host.com");

  retcode = sendto(client_s, out_buf, (strlen(out_buf) + 1), 0, (struct sockaddr *)&server_addr, sizeof(server_addr));



  if (retcode < 0)
  {
    printf("*** ERROR - sendto() failed \n");
    exit(-1);
  }

  addr_len = sizeof(server_addr);

  retcode = close(client_s);
	printf("close() returned: %d\n",retcode);
  if (retcode < 0)
  {
    printf("*** ERROR - close() failed \n");
    exit(-1);
  }
	exit(0);
}

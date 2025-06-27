#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdlib.h>

#define CLI_COMMAND_MAX_NUM_ARGS 10

/**
 * @brief Split a command string into tokens using ' '
 * 
 * @param[in]  cli_command_buff   The input command string (modifiable)
 * @param[in]  cli_buff_size      Length of the input buffer
 * @param[out] cli_command_args   Array of char* to store each token (must have enough space)
 * @param[out] cli_command_num_args Pointer to store number of tokens
 */
void command_line_parse(char *cli_command_buff, uint8_t cli_buff_size, 
    char **cli_command_args, uint8_t *cli_command_num_args)
{
    char *token = strtok(cli_command_buff, " ");

     while(token != NULL){
        cli_command_args[*cli_command_num_args] = token;
        *cli_command_num_args = *cli_command_num_args + 1;
        token = strtok(NULL, " ");
    }  

}

int main()
{
    char command_str[] = "SET GPIO A0 1";
    char *args_list[CLI_COMMAND_MAX_NUM_ARGS];  // mảng con trỏ
    uint8_t num_args = 0;

    command_line_parse(command_str, sizeof(command_str), args_list, &num_args);

    for (int i = 0; i < num_args; i++) {
        printf("Argument %d: %s\n", i, args_list[i]);
    }

    return 0;
}

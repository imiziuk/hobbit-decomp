
void FUN_0063d750(char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  thunk_FUN_0063dbd0((int)pcVar2 - (int)param_1,8);
  FUN_0063d9d0(param_1,((int)pcVar2 - (int)param_1) * 8);
  return;
}


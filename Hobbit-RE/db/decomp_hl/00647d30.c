
void FUN_00647d30(char *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  if (param_1 == (char *)0x0) {
    param_1 = &DAT_0074c278;
  }
  iVar2 = FUN_00647cf0(param_1,s_C__projects_meridian_xCore_x_fil_0074c590,0x2ad);
  pcVar3 = (char *)thunk_FUN_0064ff70(iVar2 + 1);
  do {
    cVar1 = *param_1;
    *pcVar3 = cVar1;
    pcVar3 = pcVar3 + 1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  return;
}


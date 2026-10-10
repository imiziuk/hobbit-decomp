
int FUN_0065c800(char *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  iVar2 = DAT_007f23d8;
  uVar3 = 0xffffffff;
  pcVar4 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  DAT_007f23d8 = DAT_007f23d8 + (~uVar3 + 0xf & 0xfffffff0);
  FUN_00648480(iVar2,param_1,~uVar3);
  return iVar2;
}


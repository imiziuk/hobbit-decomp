
void __fastcall FUN_0043a390(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = (int *)(param_1 + 0x924);
  iVar4 = 0x10;
  do {
    pcVar3 = (char *)*piVar5;
    if (pcVar3 == (char *)0x0) {
      pcVar3 = s_NOT_AVAILABLE_00723dd4;
    }
    iVar1 = piVar5[0x10];
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    uVar2 = FUN_0043a420(piVar5[-0x12]);
    FUN_0064e7d0(s_zC_c___16_16s____4d__<_s>_00723db6 + 2,((-1 < piVar5[0x10]) - 1U & 10) + 0x20,
                 uVar2,iVar1,pcVar3);
    piVar5 = piVar5 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}


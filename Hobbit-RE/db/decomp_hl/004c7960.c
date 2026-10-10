
void __fastcall FUN_004c7960(int param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if ((*(byte *)(param_1 + 0x15d) & 1) != 0) {
    FUN_005493e0(*(int *)(param_1 + 0x148) + 4);
    pcVar1 = (char *)FUN_005493e0(*(int *)(param_1 + 0x148) + 4);
    if (pcVar1 == (char *)0x0) {
      pcVar1 = &DAT_0075b6e0;
    }
    if (*pcVar1 != '\0') {
      FUN_004d22c0(1);
      uVar2 = *(undefined4 *)(param_1 + 0xc);
      uVar5 = *(undefined4 *)(param_1 + 8);
      uVar4 = 0;
      uVar3 = 0;
      uVar6 = uVar2;
      FUN_00425250(param_1 + 0x82);
      uVar2 = FUN_004c7d60(0,uVar2,uVar3,uVar4,uVar5,uVar6);
      uVar2 = FUN_004c7d60(uVar2);
      FUN_004c7a10(param_1 + 0x14,param_1 + 0x68,param_1 + 0x130,uVar2);
    }
  }
  return;
}



int __thiscall FUN_00434eb0(int param_1,undefined4 *param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  
  pcVar5 = (char *)*param_2;
  uVar7 = 0x1505;
  cVar2 = *pcVar5;
  while (uVar3 = (uint)cVar2, uVar3 != 0) {
    pcVar5 = pcVar5 + 1;
    if ((0x60 < (int)uVar3) && ((int)uVar3 < 0x7b)) {
      uVar3 = uVar3 - 0x20;
    }
    uVar7 = uVar7 * 0x21 ^ uVar3;
    cVar2 = *pcVar5;
  }
  uVar6 = uVar7 % 0x18c;
  uVar3 = *(uint *)(*(int *)(param_1 + 0xb60) + uVar6 * 8);
  iVar1 = *(int *)(param_1 + 0xb60) + uVar6 * 8;
  do {
    if (uVar3 == 0) {
      return -1;
    }
    if (uVar3 == uVar7) {
      iVar1 = *(int *)(iVar1 + 4);
      iVar4 = FUN_00647ed0((&PTR_DAT_00720fa0)[iVar1],*param_2);
      if (iVar4 == 0) {
        return iVar1;
      }
    }
    uVar6 = uVar6 + 1;
    if (uVar6 == 0x18c) {
      uVar6 = 0;
    }
    uVar3 = *(uint *)(*(int *)(param_1 + 0xb60) + uVar6 * 8);
    iVar1 = *(int *)(param_1 + 0xb60) + uVar6 * 8;
  } while( true );
}


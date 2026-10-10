
undefined4 __thiscall
FUN_005c0160(int param_1,int param_2,int param_3,undefined4 *param_4,int *param_5,undefined4 param_6
            ,undefined4 param_7,int *param_8,undefined4 param_9)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  
  iVar3 = param_2;
  iVar5 = param_3 * 0x20;
  uVar1 = *(uint *)(iVar5 + *(int *)(param_1 + 0x70));
  uVar2 = *(uint *)(iVar5 + 4 + *(int *)(param_1 + 0x70));
  cVar4 = __aullshr();
  if (cVar4 == '\0') {
    return 0;
  }
  FUN_005c0430(cVar4,param_6,param_7,param_8,param_9);
  *param_8 = (int)(*param_8 + (*param_8 >> 0x1f & 7U)) >> 3;
  *param_4 = *(undefined4 *)(iVar5 + 8 + *(int *)(param_1 + 0x70));
  iVar5 = *(int *)(iVar5 + 0x18 + *(int *)(param_1 + 0x70));
  *param_5 = iVar5;
  if (iVar3 == 0) {
    *param_5 = iVar5;
  }
  FUN_005c0430(uVar1 & 0xff,&param_3,&param_2,&param_8,&param_9);
  iVar5 = ((int)((int)param_8 + ((int)param_8 >> 0x1f & 7U)) >> 3) * param_3 * param_2;
  if (iVar3 == 0x18) {
    *param_5 = *param_5 + iVar5;
  }
  FUN_005c0430(uVar1 >> 0x18,&param_3,&param_2,&param_8,&param_9);
  iVar5 = iVar5 + ((int)((int)param_8 + ((int)param_8 >> 0x1f & 7U)) >> 3) * param_3 * param_2;
  if (iVar3 == 0x20) {
    *param_5 = *param_5 + iVar5;
  }
  FUN_005c0430(uVar2 & 0xff,&param_3,&param_2,&param_8,&param_9);
  iVar5 = iVar5 + ((int)((int)param_8 + ((int)param_8 >> 0x1f & 7U)) >> 3) * param_3 * param_2;
  if (iVar3 == 8) {
    *param_5 = *param_5 + iVar5;
  }
  FUN_005c0430(uVar1 >> 8 & 0xff,&param_3,&param_2,&param_8,&param_9);
  iVar5 = iVar5 + ((int)((int)param_8 + ((int)param_8 >> 0x1f & 7U)) >> 3) * param_3 * param_2;
  if (iVar3 == 0x28) {
    *param_5 = *param_5 + iVar5;
  }
  FUN_005c0430(uVar2 >> 8 & 0xff,&param_3,&param_2,&param_8,&param_9);
  if (iVar3 == 0x10) {
    *param_5 = *param_5 +
               ((int)((int)param_8 + ((int)param_8 >> 0x1f & 7U)) >> 3) * param_3 * param_2 + iVar5;
  }
  FUN_005c0430(uVar1 >> 0x10 & 0xff,&param_2,&param_3,&param_8,&param_5);
  return 1;
}


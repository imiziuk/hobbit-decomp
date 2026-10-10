
byte __thiscall FUN_00650ab0(int *param_1,uint param_2,int param_3,int param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  
  if ((char)param_1[7] == '\0') {
    sVar1 = (short)param_1[5];
  }
  else {
    sVar1 = *(short *)(*param_1 + 4 + param_4 * 8);
  }
  if ((char)param_1[7] == '\0') {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*param_1 + param_4 * 8);
  }
  iVar2 = *(int *)(&DAT_006f6cf0 + *(char *)((int)param_1 + 0x1d) * 0x7c);
  pbVar4 = (byte *)(*param_1 +
                   ((int)(iVar2 * param_2) >> 3) + iVar3 + (iVar2 * sVar1 * param_3 >> 3));
  if (iVar2 != 4) {
    return *pbVar4;
  }
  if ((*(byte *)((int)param_1 + 0x1b) & 2) == 0) {
    if ((param_2 & 1) != 0) goto LAB_00650b2b;
  }
  else if ((param_2 & 1) == 0) {
LAB_00650b2b:
    return *pbVar4 & 0xf;
  }
  return *pbVar4 >> 4;
}


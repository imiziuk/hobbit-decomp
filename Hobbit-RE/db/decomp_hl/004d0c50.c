
void __thiscall FUN_004d0c50(int param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  void *pvVar3;
  int iVar4;
  
  iVar4 = param_2;
  FUN_0063ff20();
  uVar1 = *(uint *)(iVar4 + 0xc);
  iVar4 = 0;
  *(short *)(param_1 + 0xc0) = (short)uVar1;
  if (*(int *)(param_1 + 0xac) != 0) {
    FUN_006bf840(*(int *)(param_1 + 0xac));
  }
  pvVar3 = operator_new(uVar1);
  *(void **)(param_1 + 0xac) = pvVar3;
  FUN_00648600(pvVar3,0,uVar1);
  DAT_0075db34 = DAT_0075db34 + uVar1;
  bVar2 = false;
  if (0 < (int)uVar1) {
    do {
      FUN_0063ffc0();
      FUN_00640450(s_Flags_0072d698,&param_2);
      *(undefined1 *)(iVar4 + *(int *)(param_1 + 0xac)) = (undefined1)param_2;
      if (param_2 != 0) {
        bVar2 = true;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)uVar1);
    if (bVar2) {
      return;
    }
  }
  FUN_006bf840(*(undefined4 *)(param_1 + 0xac));
  *(undefined4 *)(param_1 + 0xac) = 0;
  DAT_0075db34 = DAT_0075db34 - uVar1;
  return;
}


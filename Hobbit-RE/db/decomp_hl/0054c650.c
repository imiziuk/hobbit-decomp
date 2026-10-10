
undefined4 __thiscall
FUN_0054c650(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int *param_5,
            undefined4 param_6,int param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10
            )

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar4 = param_5;
  iVar2 = param_4;
  puStack_8 = &LAB_006d97b8;
  local_c = ExceptionList;
  iVar7 = *(int *)(param_1 + 0x2adc) + 1;
  ExceptionList = &local_c;
  *(int *)(param_1 + 0x2adc) = iVar7;
  *(undefined4 *)(param_1 + 0x2ae0 + iVar7 * 4) = param_9;
  *(undefined4 *)(param_1 + 0x2b20 + *(int *)(param_1 + 0x2adc) * 4) = param_10;
  *(undefined4 *)(param_1 + 0x28dc + *(int *)(param_1 + 0x2adc) * 4) =
       *(undefined4 *)(*param_5 * 0x20 + 0x200c + param_1);
  puVar1 = (undefined1 *)(*(int *)(param_1 + 0x2adc) * 0x1c + 0x291c + param_1);
  local_4 = 0;
  if ((undefined4 *)puVar1 != &param_2) {
    if (*(int *)(puVar1 + 0x10) < param_4) {
      FUN_006bf840(*(undefined4 *)(puVar1 + 0xc));
      pvVar5 = operator_new(iVar2 * 4);
      *(void **)(puVar1 + 0xc) = pvVar5;
      *(undefined4 *)(puVar1 + 8) = 0;
      *(int *)(puVar1 + 0x10) = iVar2;
    }
    iVar7 = 0;
    if (0 < iVar2) {
      do {
        *(int *)(*(int *)(puVar1 + 0xc) + iVar7 * 4) = piVar4[iVar7];
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar2);
    }
    *(int *)(puVar1 + 8) = iVar2;
  }
  iVar7 = *(int *)(param_1 + 0x2adc) * 0x1c;
  iVar2 = iVar7 + 0x291c + param_1;
  iVar7 = *(int *)(iVar7 + 0x2924 + param_1) + -1;
  if (0 < iVar7) {
    iVar6 = 0;
    do {
      *(undefined4 *)(iVar6 + *(int *)(iVar2 + 0xc)) =
           *(undefined4 *)(iVar6 + 4 + *(int *)(iVar2 + 0xc));
      iVar6 = iVar6 + 4;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + -1;
  uVar3 = *(undefined4 *)(param_1 + 0x2adc);
  if (param_7 != 2) {
    FUN_006bf840(piVar4);
  }
  ExceptionList = local_c;
  return uVar3;
}


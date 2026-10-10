
void FUN_0067b860(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 uStack_5c;
  void *pvStack_58;
  undefined4 uStack_50;
  undefined4 uStack_38;
  int iStack_30;
  undefined4 uStack_2c;
  undefined1 auStack_10 [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006e6ec8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(*param_1 + 4))();
  iVar2 = (param_2 << 7) / 0x24;
  iVar3 = iVar2;
  if (param_4 != 0) {
    iVar3 = (param_4 << 7) / 0x24;
    if (param_4 < param_2) {
      iVar2 = iVar3;
      param_2 = param_4;
    }
  }
  uStack_5c = 0x14;
  (**(code **)(*param_1 + 0xc))(param_1,&uStack_5c);
  (**(code **)(*param_1 + 0x24))(param_1,&stack0xffffff8c);
  if (((uint)param_1 & 1) != 0) {
    (**(code **)(*param_1 + 0x10))(param_1,&uStack_4,&stack0x00000000);
  }
  uVar6 = 0;
  puVar5 = &stack0xffffff88;
  puVar4 = &stack0xffffff8c;
  (**(code **)(*param_1 + 0x2c))
            (param_1,puStack_8,iVar3,auStack_10,&stack0xffffff90,puVar4,puVar5,0);
  FUN_00681410();
  uStack_38 = 0;
  FUN_00681a50(1,0,0x40,&stack0xffffff88);
  FUN_00681430(&stack0xffffff88,0);
  iVar1 = FUN_006814c0(uStack_2c,iStack_30,param_2 / 0x24);
  if (iVar1 == 0) {
    OutputDebugStringA(s_Malformed_input_data_00752e28);
    iVar2 = 0;
  }
  if (iVar2 < iVar3) {
    FUN_00648600(iStack_30 + iVar2,iVar3 - iVar2,0);
  }
  (**(code **)(*param_1 + 0x4c))(param_1,iStack_30,uVar6,puVar5,puVar4);
  (**(code **)(*param_1 + 8))(param_1);
  uStack_50 = 0xffffffff;
  FUN_00681420();
  ExceptionList = pvStack_58;
  return;
}


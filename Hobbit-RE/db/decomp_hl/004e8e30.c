
void __thiscall FUN_004e8e30(int param_1,float param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d5be0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_water__ApplyWaterPain_0072ebec);
  local_4 = 0;
  if (*(int *)(param_1 + 0x180) != 0) {
    FUN_00649600(s_water__Logic___PainEmission_0072ebd0);
    local_4 = CONCAT31(local_4._1_3_,1);
    piVar1 = (int *)FUN_0041bcc0();
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0x28))();
    uStack_18 = *puVar2;
    uStack_14 = puVar2[1];
    uStack_10 = puVar2[2];
    iVar3 = FUN_004e7c90(&uStack_18);
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0x26c) = *(undefined4 *)(param_1 + 0x184);
    }
    else {
      param_2 = param_2 + *(float *)(param_1 + 0x26c);
      *(float *)(param_1 + 0x26c) = param_2;
      if (*(float *)(param_1 + 0x184) <= param_2) {
        *(float *)(param_1 + 0x26c) = param_2 - *(float *)(param_1 + 0x184);
        param_2 = 0.0;
        uVar4 = 0x10;
        if (*(int *)(param_1 + 0x180) == 2) {
          param_2 = *(float *)(param_1 + 0x188);
          uVar4 = 0x11;
        }
        piVar1 = (int *)FUN_0041bcc0();
        (**(code **)(*piVar1 + 0x78))
                  (*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),&uStack_18,0x3f800000
                   ,*(undefined4 *)(param_1 + 0x18c),*(undefined4 *)(param_1 + 0x18c),param_2,uVar4,
                   0);
      }
    }
    local_4 = local_4 & 0xffffff00;
    FUN_00649720();
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}


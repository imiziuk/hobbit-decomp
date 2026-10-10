
void __thiscall FUN_0063aae0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (DAT_007ba9d4 == '\0') {
    iVar1 = *(int *)(param_1 + 0x38);
    if (iVar1 == 0) {
      FUN_0064e7d0(s_RigidRI_Received_a_render_task_w_0074a798);
      return;
    }
    iVar2 = *(int *)(param_2 + 8);
    if ((iVar2 < *(int *)(iVar1 + 0x74)) && (*(int *)(param_1 + 0x10) != 0)) {
      if ((*(byte *)(param_1 + 8) & 4) == 0) {
        uStack_10 = 0;
        uStack_20 = 0;
        uStack_30 = 0;
        uStack_c = 0;
        uStack_1c = 0;
        uStack_3c = 0;
        uStack_8 = 0;
        uStack_28 = 0;
        uStack_38 = 0;
        uStack_14 = 0;
        uStack_24 = 0;
        uStack_34 = 0;
        uStack_40 = 0x3f800000;
        uStack_2c = 0x3f800000;
        uStack_18 = 0x3f800000;
        uStack_4 = 0x3f800000;
        (**(code **)(*DAT_007f1000 + 0x94))(DAT_007f1000,0x100,&uStack_40);
      }
      else {
        if (*(int *)(param_1 + 0x18) < 1) {
          uStack_10 = 0;
          uStack_20 = 0;
          uStack_30 = 0;
          uStack_c = 0;
          uStack_1c = 0;
          uStack_3c = 0;
          uStack_8 = 0;
          uStack_28 = 0;
          uStack_38 = 0;
          uStack_14 = 0;
          uStack_24 = 0;
          uStack_34 = 0;
          uStack_40 = 0x3f800000;
          uStack_2c = 0x3f800000;
          uStack_18 = 0x3f800000;
          uStack_4 = 0x3f800000;
          (**(code **)(*DAT_007f1000 + 0x94))(DAT_007f1000,0x100,&uStack_40);
        }
        else {
          iVar5 = 0;
          if (0 < *(int *)(iVar1 + 100)) {
            iVar3 = *(int *)(iVar1 + 0x68);
            do {
              if ((*(int *)(iVar3 + 0xc) <= iVar2) &&
                 (iVar2 < *(int *)(iVar3 + 8) + *(int *)(iVar3 + 0xc))) {
                (**(code **)(*DAT_007f1000 + 0x94))
                          (DAT_007f1000,0x100,
                           **(short **)(iVar3 + 0x14) * 0x40 + *(int *)(param_1 + 0x14));
                break;
              }
              iVar5 = iVar5 + 1;
              iVar3 = iVar3 + 0x2c;
            } while (iVar5 < *(int *)(iVar1 + 100));
          }
        }
        if ((*(byte *)(param_1 + 0x3c) & 4) == 0) {
          (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0xe,0);
          (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,7,0);
        }
      }
      FUN_0065fce0(0);
      iVar1 = *DAT_007f1000;
      uVar4 = FUN_00672280();
      (**(code **)(iVar1 + 0x94))(DAT_007f1000,2,uVar4);
      iVar1 = *DAT_007f1000;
      uVar4 = FUN_006722a0();
      (**(code **)(iVar1 + 0x94))(DAT_007f1000,3,uVar4);
      FUN_00662ce0(uStack_14,0 < (*(int **)(param_1 + 0x24))[1] + **(int **)(param_1 + 0x24));
    }
  }
  return;
}


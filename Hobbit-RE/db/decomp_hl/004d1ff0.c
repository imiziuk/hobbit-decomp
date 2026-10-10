
void __thiscall FUN_004d1ff0(int param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  float *pfVar6;
  float local_30 [6];
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d4e18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_special_surfaces__GetCollisionBB_0072d7f0);
  local_4 = 0;
  iVar3 = FUN_00549470(param_1 + 0xbc);
  if (iVar3 == 0) {
    local_30[3] = (float)iVar3;
    local_30[4] = (float)iVar3;
    local_30[5] = (float)iVar3;
    FUN_00401f00(0xc2480000,0xc2480000,0xc2480000);
    *param_2 = local_30[0];
    param_2[2] = local_30[2];
    param_2[1] = local_30[1];
    uVar4 = FUN_00401f00(0x42480000,0x42480000,0x42480000);
    uVar4 = FUN_00402130(local_18,local_30 + 3,uVar4);
    FUN_004357e0(uVar4);
    local_30[5] = param_2[2];
    local_30[2] = param_2[5];
    fVar1 = *(float *)(param_3 + 0x30);
    local_30[3] = *param_2;
    local_30[0] = param_2[3];
    local_30[4] = param_2[1];
    local_30[1] = param_2[4];
    param_2[3] = fVar1;
    *param_2 = fVar1;
    fVar1 = *(float *)(param_3 + 0x34);
    param_2[4] = fVar1;
    param_2[1] = fVar1;
    fVar1 = *(float *)(param_3 + 0x38);
    param_2[5] = fVar1;
    param_2[2] = fVar1;
    param_3 = param_3 - (int)param_2;
    iVar3 = 3;
    do {
      pfVar6 = (float *)(param_3 + (int)param_2);
      iVar5 = 0;
      do {
        fVar1 = *pfVar6 * *(float *)((int)local_30 + iVar5 + 0xc);
        fVar2 = *pfVar6 * *(float *)((int)local_30 + iVar5);
        if (fVar1 < fVar2 == (NAN(fVar1) || NAN(fVar2))) {
          *param_2 = fVar2 + *param_2;
        }
        else {
          *param_2 = fVar1 + *param_2;
          fVar1 = fVar2;
        }
        iVar5 = iVar5 + 4;
        pfVar6 = pfVar6 + 4;
        param_2[3] = fVar1 + param_2[3];
      } while (iVar5 < 0xc);
      param_2 = param_2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  else {
    FUN_004357e0(iVar3 + 0xac);
    FUN_004357e0(iVar3 + 0xb8);
    FUN_004936f0(param_3);
  }
  FUN_00549580(param_1 + 0xbc);
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}


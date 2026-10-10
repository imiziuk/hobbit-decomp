
void __thiscall FUN_004b7b20(int *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  float local_24;
  int local_20;
  int local_1c;
  float local_18 [3];
  undefined1 local_c [12];
  
  fVar2 = (float)FUN_00549470(param_1 + 0x2a);
  pfVar7 = (float *)(param_1 + 0xb);
  if (fVar2 == 0.0) {
    local_18[0] = fVar2;
    local_18[1] = fVar2;
    local_18[2] = fVar2;
    FUN_00401f00(0xc2480000,0xc2480000,0xc2480000);
    param_1[0xc] = local_20;
    *pfVar7 = local_24;
    param_1[0xd] = local_1c;
    uVar3 = FUN_00401f00(0x42480000,0x42480000,0x42480000);
    uVar3 = FUN_00402130(local_c,local_18,uVar3);
    FUN_004357e0(uVar3);
    local_18[1] = (float)param_1[0xc];
    local_20 = param_1[0xf];
    fVar2 = *(float *)(param_2 + 0x30);
    local_18[0] = *pfVar7;
    local_24 = (float)param_1[0xe];
    local_18[2] = (float)param_1[0xd];
    param_1[0xe] = (int)fVar2;
    *pfVar7 = fVar2;
    iVar6 = *(int *)(param_2 + 0x34);
    param_1[0xf] = iVar6;
    param_1[0xc] = iVar6;
    iVar6 = *(int *)(param_2 + 0x38);
    local_1c = param_1[0x10];
    param_1[0x10] = iVar6;
    param_1[0xd] = iVar6;
    param_2 = param_2 - (int)pfVar7;
    iVar6 = 3;
    do {
      pfVar5 = (float *)(param_2 + (int)pfVar7);
      iVar4 = 0;
      do {
        fVar2 = *pfVar5 * *(float *)((int)local_18 + iVar4);
        fVar1 = *pfVar5 * *(float *)((int)&local_24 + iVar4);
        if (fVar2 < fVar1 == (NAN(fVar2) || NAN(fVar1))) {
          *pfVar7 = fVar1 + *pfVar7;
        }
        else {
          *pfVar7 = fVar2 + *pfVar7;
          fVar2 = fVar1;
        }
        iVar4 = iVar4 + 4;
        pfVar5 = pfVar5 + 4;
        pfVar7[3] = fVar2 + pfVar7[3];
      } while (iVar4 < 0xc);
      pfVar7 = pfVar7 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  else {
    FUN_004357e0((int)fVar2 + 0xac);
    FUN_004357e0((int)fVar2 + 0xb8);
    FUN_004936f0(param_2);
  }
  FUN_00549580(param_1 + 0x2a);
  iVar6 = *param_1;
  uVar3 = (**(code **)(iVar6 + 0x28))(0);
  (**(code **)(iVar6 + 0x14))(uVar3);
  return;
}


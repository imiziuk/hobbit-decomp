
void __thiscall
FUN_0057cb20(int param_1,float *param_2,float *param_3,float *param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  float local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_58 [12];
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  if ((*(int *)(param_1 + 0x43d4) == 0) || (*(int *)(param_1 + 0x480) < 1)) {
    param_5 = *(undefined4 *)(param_1 + 0x42d8);
    param_6 = *(undefined4 *)(param_1 + 0x42dc);
    local_9c = *param_2;
    local_98 = param_2[1];
    local_94 = param_2[2];
    local_90 = *param_3;
    local_8c = param_3[1];
    local_88 = param_3[2];
    local_84 = *param_4;
    local_80 = param_4[1];
    local_7c = param_4[2];
    iVar2 = FUN_00607990(&local_9c,param_1 + 0x408c + *(int *)(param_1 + 0x42d0) * 0x18,
                         param_1 + (*(int *)(param_1 + 0x42d0) * 3 + 0x813) * 8,&local_b0,local_30);
    if (iVar2 != 0) {
      FUN_00401f00(*param_4 - *param_2,param_4[1] - param_2[1],param_4[2] - param_2[2]);
      FUN_00401f00(*param_3 - *param_2,param_3[1] - param_2[1],param_3[2] - param_2[2]);
      uVar3 = FUN_0042eb90(local_c,local_24,local_18);
      FUN_004357e0(uVar3);
      FUN_0042e1f0();
      fVar4 = (float10)FUN_00402020(param_2);
      local_b4 = (float)-fVar4;
      local_a0 = (float)-fVar4;
      local_a8 = local_bc;
      local_ac = local_c0;
      local_a4 = local_b8;
      if (param_4[1] < param_3[1] == (NAN(param_4[1]) || NAN(param_3[1]))) {
        fVar1 = param_4[1];
      }
      else {
        fVar1 = param_3[1];
      }
      if (param_2[1] <= fVar1) {
        if (param_4[1] < param_3[1] == (NAN(param_4[1]) || NAN(param_3[1]))) {
          fVar1 = param_4[1];
        }
        else {
          fVar1 = param_3[1];
        }
      }
      else {
        fVar1 = param_2[1];
      }
      puVar7 = &local_ac;
      puVar6 = &local_c0;
      puVar5 = local_30;
      FUN_0057ddb0(local_b0,puVar5,puVar6,puVar7,param_5,param_6,param_7,8,0,fVar1,0);
      FUN_004357e0(local_58);
      FUN_0057da20(local_78,local_74,local_70,local_6c,local_68,local_64,local_60,local_5c,puVar5,
                   puVar6,puVar7,local_4c,local_48,local_44,local_40,local_3c,local_38,local_34);
    }
  }
  return;
}


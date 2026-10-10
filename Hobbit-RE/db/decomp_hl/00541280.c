
void __thiscall FUN_00541280(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined1 local_d8 [8];
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float fStack_9c;
  float local_98;
  float local_94;
  float local_90;
  float fStack_8c;
  float local_88;
  float local_84;
  float local_80;
  undefined1 auStack_7c [12];
  undefined1 auStack_70 [12];
  undefined1 auStack_64 [24];
  undefined1 local_4c [60];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d9351;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_char_anim_player__PrepareRootKey_00737ccc);
  local_4 = 0;
  FUN_00541d70(&local_b8);
  local_c4 = *(undefined4 *)(param_2 + 0x10);
  fVar1 = *(float *)(param_1 + 0x28);
  fVar2 = *(float *)(param_2 + 0x1c) * fVar1;
  local_c8 = *(undefined4 *)(param_2 + 0xc);
  local_c0 = *(undefined4 *)(param_2 + 0x14);
  fVar3 = *(float *)(param_2 + 0x20) * fVar1;
  local_bc = *(float *)(param_2 + 0x18);
  fVar1 = *(float *)(param_2 + 0x24) * fVar1;
  FUN_00401f00(local_b8 * fVar2 + local_a8 * fVar3 + local_98 * fVar1 + local_88,
               local_b4 * fVar2 + local_a4 * fVar3 + local_94 * fVar1 + local_84,
               local_b0 * fVar2 + local_a0 * fVar3 + local_90 * fVar1 + local_80);
  FUN_0064dc00(local_4c,&local_b8,&local_c8,local_d8);
  puVar4 = (undefined4 *)FUN_0064d8e0();
  uStack_cc = *puVar4;
  local_c8 = puVar4[1];
  local_c4 = puVar4[2];
  local_c0 = puVar4[3];
  FUN_00542030(&stack0xffffff14,auStack_7c,auStack_64,auStack_70);
  FUN_00401f00(fStack_9c * *(float *)(param_1 + 0x38) +
               local_bc * *(float *)(param_1 + 0x30) + fStack_ac * *(float *)(param_1 + 0x34) +
               fStack_8c,
               local_98 * *(float *)(param_1 + 0x38) +
               local_a8 * *(float *)(param_1 + 0x34) + local_b8 * *(float *)(param_1 + 0x30) +
               local_88,local_94 * *(float *)(param_1 + 0x38) +
                        local_a4 * *(float *)(param_1 + 0x34) +
                        local_b4 * *(float *)(param_1 + 0x30) + local_84);
  FUN_0042fda0(&uStack_cc);
  FUN_004357e0(&stack0xffffff14);
  uVar5 = FUN_00401f00(local_d0,local_d0,local_d0);
  FUN_004357e0(uVar5);
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_10;
  return;
}


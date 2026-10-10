
void __fastcall FUN_004f7a00(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined1 local_288 [4];
  undefined4 local_284 [2];
  undefined4 local_27c;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_260;
  undefined4 local_25c;
  undefined4 local_258;
  
  FUN_00406a80();
  if (*(int *)(param_1 + 0x898) != 0 || *(int *)(param_1 + 0x89c) != 0) {
    piVar1 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 0x890),*(undefined4 *)(param_1 + 0x894));
    if ((DAT_006e92e4 < *(float *)(param_1 + 0x814)) ||
       ((NAN(*(float *)(param_1 + 0x818)) || NAN(DAT_006e92e4)) ==
        (*(float *)(param_1 + 0x818) == DAT_006e92e4))) {
      *(undefined4 *)(param_1 + 0x8a4) = 6;
    }
    switch(*(undefined4 *)(param_1 + 0x8a4)) {
    case 0:
      *(undefined4 *)(param_1 + 0x8a4) = 4;
      return;
    case 1:
      FUN_004c73d0();
      local_258 = 7;
      uVar3 = FUN_005496c0(s_exclam_pulse_anim_0072f970,s_Props_00720224);
      FUN_004c7010(uVar3);
      FUN_004c7660(0);
      FUN_004c77d0(0);
      (**(code **)(*piVar1 + 0x120))(0x3f800000);
      FUN_004c74d0(0x3f800000);
      (**(code **)(*piVar1 + 0x100))();
      *(ushort *)((int)piVar1 + 0x15a) = *(ushort *)((int)piVar1 + 0x15a) & 0xbfff ^ 0x4000;
      *(undefined1 *)((int)piVar1 + 0x85) = 0xff;
      *(undefined1 *)(piVar1 + 0x21) = 0xe0;
      *(undefined1 *)((int)piVar1 + 0x83) = 0xe0;
      *(undefined1 *)((int)piVar1 + 0x82) = 0xe0;
      *(undefined4 *)(param_1 + 0x8a4) = 3;
      return;
    case 2:
      FUN_004c73d0();
      local_258 = 7;
      uVar3 = FUN_005496c0(s_exclam_pulse_anim_0072f970,s_Props_00720224);
      FUN_004c7010(uVar3);
      FUN_004c7660(0);
      FUN_004c77d0(1);
      (**(code **)(*piVar1 + 0x120))(0x3f800000);
      FUN_004c74d0(0x3f800000);
      (**(code **)(*piVar1 + 0x100))();
      *(ushort *)((int)piVar1 + 0x15a) = *(ushort *)((int)piVar1 + 0x15a) & 0xbfff ^ 0x4000;
      *(undefined4 *)(param_1 + 0x8a4) = 5;
      return;
    case 3:
      puVar5 = local_284;
      puVar4 = local_288;
      FUN_0065fd00(0,puVar4,puVar5);
      FUN_006721e0(puVar4,puVar5);
      local_260 = local_284[0];
      local_264 = 0;
      local_25c = 0;
      (**(code **)(*piVar1 + 0xf0))(&local_264);
      (**(code **)(*piVar1 + 0x100))();
      iVar2 = FUN_004c7410();
      if (iVar2 != 0) {
        *(undefined4 *)(param_1 + 0x8a4) = 6;
        return;
      }
      break;
    case 4:
      puVar5 = local_284;
      puVar4 = local_288;
      FUN_0065fd00(0,puVar4,puVar5);
      FUN_006721e0(puVar4,puVar5);
      local_278 = local_284[0];
      local_27c = 0;
      local_274 = 0;
      (**(code **)(*piVar1 + 0xf0))(&local_27c);
      (**(code **)(*piVar1 + 0x100))();
      iVar2 = FUN_004c7410();
      if (iVar2 != 0) {
        *(undefined4 *)(param_1 + 0x8a4) = 2;
        return;
      }
      break;
    case 5:
      puVar5 = local_284;
      puVar4 = local_288;
      FUN_0065fd00(0,puVar4,puVar5);
      FUN_006721e0(puVar4,puVar5);
      local_26c = local_284[0];
      local_270 = 0;
      local_268 = 0;
      (**(code **)(*piVar1 + 0xf0))(&local_270);
      (**(code **)(*piVar1 + 0x100))();
      return;
    case 6:
      FUN_004d22c0(1);
      *(undefined4 *)(param_1 + 0x8a0) = 0;
      *(undefined4 *)(param_1 + 0x898) = 0;
      *(undefined4 *)(param_1 + 0x89c) = 0;
    }
  }
  return;
}


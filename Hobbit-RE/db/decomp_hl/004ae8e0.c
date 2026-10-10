
void FUN_004ae8e0(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_80 [128];
  
  FUN_004ab4e0(param_1);
  if (DAT_0075d338 == 0) {
    iVar1 = FUN_00425010();
    FUN_00647d10(iVar1,s_Rotation_007207f0);
    *(undefined4 *)(iVar1 + 0x80) = 0xb;
    *(undefined4 *)(iVar1 + 0xd8) = 0;
    *(undefined4 *)(iVar1 + 0xdc) = 0;
    *(undefined4 *)(iVar1 + 0xe0) = 0;
    *(undefined4 *)(iVar1 + 0xe4) = 0x40c90fdb;
    *(undefined4 *)(iVar1 + 0xe8) = 0x40c90fdb;
    *(undefined4 *)(iVar1 + 0xec) = 0x40c90fdb;
    *(undefined4 *)(iVar1 + 0x84) = 3;
    FUN_00647d10(auStack_80,s_Rotation_007207f0);
    FUN_00647dc0(auStack_80,s__Pitch_007207e8);
    FUN_004bffd0(param_1,auStack_80,0x12,0,0x40c90fdb);
    FUN_00647d10(auStack_80,s_Rotation_007207f0);
    FUN_00647dc0(auStack_80,&DAT_007207e0);
    FUN_004bffd0(param_1,auStack_80,0x12,0,0x40c90fdb);
    FUN_00647d10(auStack_80,s_Rotation_007207f0);
    FUN_00647dc0(auStack_80,s__Roll_007207d8);
    FUN_004bffd0(param_1,auStack_80,0x12,0,0x40c90fdb);
    if (DAT_0075d338 == 0) {
      iVar1 = FUN_00425010();
      *(undefined4 *)(iVar1 + 0x80) = 1;
      FUN_00647d10(iVar1,s_Number_of_Keys_0072bac8);
      *(undefined4 *)(iVar1 + 0x84) = 4;
      *(undefined4 *)(iVar1 + 0xf0) = 0;
      *(undefined4 *)(iVar1 + 0xf4) = 0xffffffff;
      if (DAT_0075d338 == 0) {
        iVar1 = FUN_00425010();
        *(undefined4 *)(iVar1 + 0x80) = 0xe;
        FUN_00647d10(iVar1,s_Click_here_to_refresh_from_anim__0072baa4);
        *(undefined4 *)(iVar1 + 0x84) = 0x10;
      }
    }
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x005b4532) */
/* WARNING: Removing unreachable block (ram,0x005b4540) */
/* WARNING: Removing unreachable block (ram,0x005b45c8) */
/* WARNING: Removing unreachable block (ram,0x005b4603) */
/* WARNING: Removing unreachable block (ram,0x005b45cf) */
/* WARNING: Removing unreachable block (ram,0x005b45de) */
/* WARNING: Removing unreachable block (ram,0x005b45e0) */
/* WARNING: Removing unreachable block (ram,0x005b45f1) */
/* WARNING: Removing unreachable block (ram,0x005b45f6) */
/* WARNING: Removing unreachable block (ram,0x005b45fb) */
/* WARNING: Removing unreachable block (ram,0x005b45e7) */
/* WARNING: Removing unreachable block (ram,0x005b4609) */
/* WARNING: Removing unreachable block (ram,0x005b4645) */
/* WARNING: Removing unreachable block (ram,0x005b462a) */
/* WARNING: Removing unreachable block (ram,0x005b4633) */
/* WARNING: Removing unreachable block (ram,0x005b4636) */
/* WARNING: Removing unreachable block (ram,0x005b4643) */
/* WARNING: Removing unreachable block (ram,0x005b4647) */
/* WARNING: Removing unreachable block (ram,0x005b4655) */
/* WARNING: Removing unreachable block (ram,0x005b4657) */
/* WARNING: Removing unreachable block (ram,0x005b4670) */
/* WARNING: Removing unreachable block (ram,0x005b468e) */
/* WARNING: Removing unreachable block (ram,0x005b46b6) */
/* WARNING: Removing unreachable block (ram,0x005b4769) */

undefined4 FUN_005b4490(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006de9c3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600();
  local_4 = 0;
  FUN_004357e0();
  FUN_005b3350();
  FUN_004357e0();
  FUN_005b3350();
  FUN_004357e0();
  FUN_005b6760();
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return 1;
}


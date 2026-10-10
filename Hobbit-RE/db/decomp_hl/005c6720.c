
void __fastcall FUN_005c6720(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  byte local_8e0 [4];
  undefined4 local_8dc;
  undefined1 local_8d8 [4];
  undefined1 local_8d4 [4];
  undefined1 local_8d0 [4];
  undefined1 local_8cc [4];
  undefined1 local_8c8 [512];
  undefined1 local_6c8 [256];
  int local_5c8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006df81b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0063ddb0();
  local_4 = 0;
  uVar1 = FUN_005496c0(s_clutter_bin_00746180,0);
  iVar2 = FUN_0063df60(uVar1);
  if (iVar2 != 0) {
    iVar2 = FUN_0063e510();
    while (iVar2 != 0) {
      iVar2 = FUN_00647ed0(local_6c8,s_descriptions_00746170);
      if (iVar2 == 0) {
        iVar2 = 0;
        if (0 < local_5c8) {
          do {
            FUN_0063e6a0();
            iVar3 = FUN_005c90f0(local_8d8,local_8d0);
            FUN_0063f5e0(s_GeomName_00746164,local_8c8);
            FUN_0064a2e0(local_8c8);
            FUN_0063f5e0(s_AnimName_00746158,local_8c8);
            FUN_0064a2e0(local_8c8);
            FUN_0063f4e0(s_Radius_0072a57c,iVar3 + 0xb0);
            FUN_0063f5e0(s_PlantGeomName_00746148,local_8c8);
            FUN_0064a2e0(local_8c8);
            FUN_0063f5e0(s_PlantAnimName_00746138,local_8c8);
            FUN_0064a2e0(local_8c8);
            FUN_0063f830(s_IsPlant_0072cb08,local_8e0);
            *(ushort *)(iVar3 + 0xb4) =
                 (byte)((byte)*(ushort *)(iVar3 + 0xb4) ^ local_8e0[0]) & 1 ^
                 *(ushort *)(iVar3 + 0xb4);
            iVar2 = iVar2 + 1;
          } while (iVar2 < local_5c8);
        }
      }
      else {
        iVar2 = FUN_00647ed0(local_6c8,s_clutter_00746130);
        if (iVar2 == 0) {
          iVar2 = 0;
          if (0 < local_5c8) {
            do {
              FUN_0063e6a0();
              puVar4 = (undefined4 *)FUN_005c90f0(local_8d4,local_8cc);
              FUN_0063f560(s_InfIndex_00746124,&local_8dc);
              *puVar4 = local_8dc;
              FUN_0063f3b0(&PTR_s_o_Load_Audio_Descriptor__s_00725864,puVar4 + 1);
              FUN_0063f6f0(&PTR_s_on__d_Spawn__d_Animation_0072ea4c,puVar4 + 4);
              FUN_0063f4e0(s_Scale_00725a04,puVar4 + 7);
              FUN_0063f430(s_Color_00728924,puVar4 + 8);
              *(undefined2 *)(puVar4 + 9) = 0;
              iVar2 = iVar2 + 1;
            } while (iVar2 < local_5c8);
          }
        }
        else {
          FUN_0063f330();
        }
      }
      iVar2 = FUN_0063e510();
    }
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0x54);
  }
  local_4 = 0xffffffff;
  FUN_0063de30();
  ExceptionList = local_c;
  return;
}



void FUN_00545450(undefined4 param_1,undefined4 param_2,uint *param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  int local_50;
  uint *local_4c;
  undefined4 local_48;
  int local_44;
  undefined4 local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined1 local_28 [28];
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d9530;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_AnimationDecompress_007380a8);
  local_4 = 0;
  FUN_0063c8f0();
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_0063c9d0(param_2,0x100000);
  FUN_0063cd60(&local_40,0x20);
  uVar2 = FUN_0063caf0();
  FUN_0063cb10(local_40);
  FUN_0063cd60(&local_50,10);
  FUN_0063ce20(&local_48,2,0x21);
  puVar1 = param_3;
  FUN_005453a0(local_28,param_3,3,0x1e);
  FUN_005453a0(local_28,puVar1,3,0x1c);
  FUN_005453a0(local_28,puVar1,3,0x1a);
  FUN_005453a0(local_28,puVar1,0xff,0x12);
  iVar3 = thunk_FUN_0064ff70(local_50 * 4,s_C__projects_meridian_Support_Ani_007380bc,0x211);
  local_34 = iVar3;
  iVar4 = thunk_FUN_0064ff70(local_50 * 4,s_C__projects_meridian_Support_Ani_007380f8,0x212);
  local_44 = iVar4;
  iVar5 = thunk_FUN_0064ff70(local_50 * 4,s_C__projects_meridian_Support_Ani_00738134,0x213);
  FUN_005452f0(local_28,iVar3,&param_3);
  FUN_005452f0(local_28,iVar4,&param_3);
  FUN_005452f0(local_28,iVar5,&param_3);
  FUN_0063cb10(uVar2);
  local_4c = puVar1 + local_50;
  iVar7 = 0;
  if (0 < local_50) {
    local_3c = local_44 - (int)puVar1;
    param_3 = (uint *)(iVar3 - (int)puVar1);
    local_38 = iVar5 - (int)puVar1;
    puVar6 = puVar1;
    do {
      *puVar6 = *puVar6 & 0xfffc0000 | (int)local_4c - (int)puVar1;
      (*(code *)(&PTR_LAB_00738068)[*(int *)((int)param_3 + (int)puVar6)])
                (local_28,param_1,iVar7,local_48,&local_4c);
      (*(code *)(&PTR_LAB_00738078)[*(int *)(local_3c + (int)puVar6)])
                (local_28,param_1,iVar7,local_48,&local_4c);
      (*(code *)(&PTR_LAB_00738094)[*(int *)(local_38 + (int)puVar6)])
                (local_28,param_1,iVar7,local_48,&local_4c);
      iVar7 = iVar7 + 1;
      puVar6 = puVar6 + 1;
      iVar3 = local_34;
      iVar4 = local_44;
    } while (iVar7 < local_50);
  }
  FUN_0064ff40(iVar3,s_C__projects_meridian_Support_Ani_00738170,0x23e);
  FUN_0064ff40(iVar4,s_C__projects_meridian_Support_Ani_007381ac,0x23f);
  FUN_0064ff40(iVar5,s_C__projects_meridian_Support_Ani_007381e8,0x240);
  local_4 = local_4 & 0xffffff00;
  thunk_FUN_0063c930();
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}


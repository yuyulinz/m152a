----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    10:14:10 11/16/2016 
-- Design Name: 
-- Module Name:    elevator - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity elevator is
    Port ( sw : in  STD_LOGIC_VECTOR (0 downto 7);
           add : in  STD_LOGIC;
           close : in  STD_LOGIC;
           rem : in  STD_LOGIC;
           floor : out  STD_LOGIC_VECTOR (0 downto 3);
           open : out  STD_LOGIC;
           people : out  STD_LOGIC_VECTOR (0 downto 3);
           dir : out  STD_LOGIC);
end elevator;

architecture Behavioral of elevator is

begin


end Behavioral;

